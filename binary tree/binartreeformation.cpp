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

// Function to build the binary tree
void buildTree(node* &root) { // Passing root by reference
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if(data == -1) {
        root = NULL; // If input is -1, set root to NULL
        return;
    }

    root = new node(data); // Create a new node

    cout << "Enter data for inserting in left of " << data << endl;
    buildTree(root->left); // Recursively build left subtree

    cout << "Enter data for inserting in right of " << data << endl;
    buildTree(root->right); // Recursively build right subtree
}

// Function to perform level order traversal
void levelOrderTraversal(node* root) {
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
void buildfromlevelorder(node* &root)
{
	queue<node*>q;
	cout<<"Enter the data for root:"<<endl;
	int data;
	cin>>data;
	root=new node(data);
	q.push(root);
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		cout<<"Enter left node for:"<<temp->data<<endl;
		int ld;
		cin>>ld;
		if(ld!=-1)
		{
			temp->left=new node(ld);
			q.push(temp->left);
				}	
				
		cout<<"Enter right node for:"<<temp->data<<endl;
		int rd;
		cin>>rd;
		if(rd!=-1)
		{
			temp->right=new node(rd);
			q.push(temp->right);
				}		
	}
}
int countleaffnodes(node* &root,int &cnt)
{
	if(root==NULL)
	{
		return 0; ;
	}
	countleaffnodes(root->left,cnt);//we ahve used inorder function here
	if(root->left==NULL && root->right==NULL)
	{
		cnt++;
	}
	countleaffnodes(root->right,cnt);
	return cnt;
}
int main() {
	int cnt=0;
    node* root = NULL;
    buildfromlevelorder(root);
    levelOrderTraversal(root);
    cout<<"No of leaf nodes:"<<countleaffnodes(root,cnt)<<endl;
    /*// Build the binary tree
    cout << "Enter the elements of the binary tree (-1 for no node):" << endl;
    buildTree(root);

    // Perform level order traversal
    cout << "Level Order Traversal:" << endl;
    levelOrderTraversal(root);
    cout<<endl<<"Inorder traversal: ";
	inorder(root);
    cout<<endl<<"Preorder traversal: ";
    preorder(root);
    cout<<endl<<"Postorder traversal: ";
    postorder(root);
    

    return 0;*/
}

