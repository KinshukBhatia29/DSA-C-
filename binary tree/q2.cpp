#include<iostream>
#include<queue>
using namespace std;
class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* insertintoBST(node* &root,int d)
{
	if(root==NULL)
	{
		 root=new node(d);
		 return root;
	}
	else  if(d>root->data) 
	{
		root->right=insertintoBST(root->right,d);
	}
	else
	{
		root->left=insertintoBST(root->left,d);
	}
	return root;
}
void levelOrderTraversal(node* &root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}
void takeinput(node* &root)
{
	int data;
	cin>>data;
	while(data!=-1)
	{
		root=insertintoBST(root,data);
		cin>>data;
		
	}
}
//iterative search function
bool searchnode(node* &root,int d)
{
	node* temp=root;
	while(temp != NULL)
	{
		if (temp->data==d)
		{
			return true;
		}
		else if(temp->data>d){
		temp=temp->left;}
		else
		{
			temp=temp->right;
		}
	}
	return false;
}
//recursive search function
bool rsearchnode(node* &root, int key) {
    if (root == NULL) {
        return false;
    }
    if (root->data == key) {
        return true;
    } else if (root->data > key) {
        return rsearchnode(root->left, key);
    } else {
        return rsearchnode(root->right, key);
    }
}

void inorder(node* &root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	int k;
	node* root = NULL;
	cout<<"Enter values:";
	takeinput(root);
	cout<<"Binary tree:"<<endl;
	levelOrderTraversal(root);
	cout<<"Enter element to search:";
    cin>>k;
    cout<<"Is element present :"<<searchnode(root,k)<<"(by iterative approach)"<<endl;
   cout<<"Is element present :"<<rsearchnode(root,k)<<"(by recursive approach)"<<endl;
    cout<<endl<<"Inorder traversal: ";
	inorder(root);
	
}
