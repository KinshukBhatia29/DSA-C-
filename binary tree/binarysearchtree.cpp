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
void preorder(node* &root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node* &root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
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
node* searchnode(node* &root,int d)
{
	node* temp=root;
	while(temp != NULL)
	{
		if (temp->data==d)
		{
			return temp;
		}
		else if(temp->data>d){
		temp=temp->left;}
		else
		{
			temp=temp->right;
		}
	}
	return temp;
}
node* min(node* &root)
{
	node* temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp;
}
node* max(node* &root)
{
	node* temp=root;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	}
	return temp;
}
node* &pre(node* &root,int d)
{node* temp=searchnode(root,d);
	node* precessor=max(temp->left);
	return precessor;
}
node* &suc(node* &root,int d)
{node* temp=searchnode(root,d);
	node* successor=min(temp->right);
	return successor;
}
node* deletefromBST(node* &root,int x)
{
	//base case
	if(root->data==NULL)
	{
		return NULL;
	}
	else if(root->data==x)
	{
		//0 child
		if(root->left==NULL && root->right==NULL)
		{
			delete root;
			return NULL;
		}
		//1 child
		//left child
		else if(root->left!=NULL && root->right==NULL)
		{
			node* temp=root->left;
			delete root;
			return temp;
		}
		//right child
		else if(root->left==NULL && root->right!=NULL)
		{
			node* temp=root->right;
			delete root;
			return temp;
		}
		//2 child;
		else if(root->left!=NULL && root->right!=NULL)
		{
			int mini=min(root->right)->data;
			root->data=mini;
			root->right=deletefromBST(root->right,mini);
			return root;
		}
		
	}
	else if(root->data>x)
	{
		root->left=deletefromBST(root->left,x);
		return root;
	}
	else 
	{
	root->right=deletefromBST(root->right,x);
	return root;	
	}
	
}
int height(node* &root) {
    if (root == NULL) {
        return 0;
    } else {
        int left_height = height(root->left);
        int right_height = height(root->right);

        // Return the larger height and add 1 for the current node
        return max(left_height, right_height) + 1;
    }
}
int main()
{
	node* root = NULL;
	cout<<"Enter values:";
	takeinput(root);
	cout<<"Before deletion"<<endl;
	cout<<"Binary tree:"<<endl;
	levelOrderTraversal(root);
	cout<<endl<<"Inorder traversal: ";
	inorder(root);
    cout<<endl<<"Preorder traversal: ";
    preorder(root);
    cout<<endl<<"Postorder traversal: ";
    postorder(root);
    cout<<endl;
    int k,d;
    /*cout<<"Enter element to search:";
    cin>>k;
    //cout<<"Is element present :"<<searchnode(root,k);
    /*cout<<"Max value is:"<<max(root)->data<<endl;
    cout<<"Min value is:"<<min(root)->data<<endl;
    cout<<"Precessor is:"<<pre(root,k)->data<<endl;
    cout<<"Sucessor is:"<<suc(root,k)->data<<endl;*/
    cout<<"After deletion"<<endl;
    cout<<"Enter value which you wanna delete:";
    cin>>d;
    root=deletefromBST(root,d);
    cout<<"Binary tree:"<<endl;
	levelOrderTraversal(root);
	cout<<endl<<"Inorder traversal: ";
	inorder(root);
    cout<<endl<<"Preorder traversal: ";
    preorder(root);
    cout<<endl<<"Postorder traversal: ";
    postorder(root);
    cout<<endl;
    cout<<"Height of the binary tree: " << height(root) << endl;
    
}
