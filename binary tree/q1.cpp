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
            cout << endl;
            if(!q.empty()) { 
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
int height(node* &root) {
    if (root == NULL) {
        return 0;
    } else {
        int left_height = height(root->left);
        int right_height = height(root->right);
        return max(left_height, right_height) + 1;
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
int main()
{
	node* root = NULL;
	cout<<"Enter values:";
	takeinput(root);
	cout<<"Binary tree:"<<endl;
	levelOrderTraversal(root);
	cout<<"Height of the binary tree: " << height(root) << endl;
}
