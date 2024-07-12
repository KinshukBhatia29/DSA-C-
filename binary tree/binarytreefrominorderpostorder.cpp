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
node* solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n)
{
	//base case
	if( index<0 || inorderstart>inorderend)
	{
		return NULL;
	}
	//create a node for element
	int element=post[index--];
	node* root=new node(element);
	int pos=findposition(in,element,n);
	
	//recursive call
	root->right=solve(in,post,index,pos+1,inorderend,n);
	root->left=solve(in,post,index,inorderstart,pos-1,n);
	
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
node* buildtree(int in[],int post[],int n)
{
	int postOrderIndex=n-1;
	node*ans=solve(in,post,postOrderIndex,0,n-1,n);
	return ans;
}
int main()
{
	int in[100];
	int post[100];
	cout<<"Enter the no of elements in tree:";
	int n;
	cin>>n;
	cout<<"Enter inorder:";
	for(int i=0;i<n;i++)
	{
		cin>>in[i];
	}
		cout<<"Enter postorder:";
	for(int i=0;i<n;i++)
	{
		cin>>post[i];
	}
	node* root=buildtree(in,post,n);
	cout<<"Binary tree:"<<endl;
	levelOrderTraversal(root);
	
	return 0;
	
}
