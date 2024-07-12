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
int findposition(int in[],int element,int n)
{
	for(int i=0;i<n;i++)
	{
	if(in[i]==element)
	return i;
	}
	return -1;
}
node* solve(int in[],int pre[],int &index,int inorderstart,int inorderend,int n)
{
	//base case
	if( index>=n || inorderstart>inorderend)
	{
		return NULL;
	}
	//create a node for element
	int element=pre[index++];
	node* root=new node(element);
	int pos=findposition(in,element,n);
	
	//recursive call
	root->left=solve(in,pre,index,inorderstart,pos-1,n);
	root->right=solve(in,pre,index,pos+1,inorderend,n);
	return root;

}
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
node* buildtree(int in[],int pre[],int n)
{
	int preOrderIndex=0;
	node*ans=solve(in,pre,preOrderIndex,0,n-1,n);
	return ans;
}
int main()
{
	int in[100];
	int pre[100];
	cout<<"Enter the no of elements in tree:";
	int n;
	cin>>n;
	cout<<"Enter inorder:"; 
	for(int i=0;i<n;i++)
	{
		cin>>in[i];
	}
		cout<<"Enter preorder:";
	for(int i=0;i<n;i++)
	{
		cin>>pre[i];
	}
	node* root=buildtree(in,pre,n);
	cout<<"Binary tree:"<<endl;
	levelOrderTraversal(root);
	
	return 0;
	
}
