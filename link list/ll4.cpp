#include <iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node * next;
		//constructor
		Node(int data)
		{
			this->data= data;
			this->next=NULL;
		}
		//destructor
		~Node()
		{
			int value=this->data;
			while(this->next!=NULL)
			{
				delete next;
				this->next=NULL;
				cout<<"memory is free for node with data"<<value<<endl;
			}
		}
	
};
void Insertnode(Node *&tail,int element,int d)
{//empty list
	if(tail==NULL)
	{
		Node* temp=new Node(d);
		tail=temp;
		temp->next=temp;
	}
	else
	{//non-empty list
	//assuming element is present in list;
		Node* cur=tail;
		while(cur->data!=element)
		{
			cur=cur->next;
		}
		//when element is found
	Node* temp=new Node(d);
	temp->next=cur->next;
	cur->next=temp;
		
	}
}
void print(Node *&tail)
{
	Node *temp=tail;
	do
	{
		cout<<tail->data<<" ";
		tail=tail->next;
	}while(tail!=temp);
	cout<<endl;
}
int main()
{
	Node *tail=NULL;
	Insertnode(tail,3,5);
	print(tail);
	Insertnode(tail,5,7);
	print(tail);
	Insertnode(tail,7,3);
	print(tail);
	Insertnode(tail,3,29);
	print(tail);
	
}
