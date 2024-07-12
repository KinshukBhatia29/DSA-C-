#include <iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node * next;
		Node *prev;
		//constructor
		Node(int data)
		{
			this->data= data;
			this->next=NULL;
			this->prev=NULL;
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
void Insertathead(Node*& head, int d){
    Node* temp=new Node(d);
    temp -> next=head;
    head->prev=temp;
    head=temp;
}
void Insertattail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
int getlen(Node *&head)
{
	int len=0;
	Node *temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		len++;
	}
	return len;
}
void insertp(Node* &tail,Node*& head,int pos,int d)
{//insert at start
Node* temp=head;
	if(pos==1)
	{
		Insertathead(head,d);
		return;
	}
int cnt=1;
while(cnt<pos-1)
{
	temp=temp->next;
	cnt++;
}
	//insert at end
if(temp->next==NULL)
	{
		Insertattail(tail,d);
		return;
	}
//insert at position
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert; 
	nodetoinsert->prev=temp; 
}
void print(Node * &head)
{Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp -> data<<"->";
		temp=temp->next;
			}
	cout<<"NULL"<<endl;
	cout<<endl;
}

int main()
{
	Node *n1=new Node(10);
	Node *head=n1;
	Node *tail=n1;
	cout<<n1->data<<endl;
	Insertathead(head,15);
	print(head);
	Insertattail(tail,17);
	print(head);
	insertp(tail,head,3,40);
	print(head);
}
	
