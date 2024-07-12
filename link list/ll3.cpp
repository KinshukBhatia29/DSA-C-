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
void Insertathead(Node*& head,Node *&tail, int d){
	if(head==NULL)
	{
	Node* temp=new Node(d);	
	head=temp;
	tail=temp;
	}
	else
	{
	
    Node* temp=new Node(d);
    temp -> next=head;
    head->prev=temp;
    head=temp;
}
}
void Insertattail(Node*& head,Node* &tail, int d){
	if(tail==NULL)
	{
	Node* temp=new Node(d);	
	tail=temp;
	head=temp;
	}
	else
	{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;}
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
		Insertathead(head,tail,d);
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
		Insertattail(head,tail,d);
		return;
	}
//insert at position
	Node* nodetoinsert=new Node(d);
	nodetoinsert->next=temp->next;
	temp->next->prev=nodetoinsert;
	temp->next=nodetoinsert; 
	nodetoinsert->prev=temp; 
}
void deletep(Node*& head,int pos)
{if(pos==1)
{
	Node *temp=head;
	temp->next->prev=NULL;
	head=head->next;
	head=temp->next;
	temp->next=NULL;
	delete temp;
}
else
{
Node* cur=head;
Node* prev=NULL;
int cnt=1;
while(cnt<pos)
{
	prev=cur;
	cur=cur->next;
	cnt++;
}
cur->prev=NULL;
prev->next=cur->next;
cur->next=NULL;
delete cur;
}
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
	Node *head=NULL;
	Node *tail=NULL;
	
	Insertathead(head,tail,15);
	print(head);
	Insertathead(head,tail,17);
	print(head);
	insertp(tail,head,2,40);
	print(head);
	Insertattail(head,tail,50);
	print(head);
	deletep(head,3);
	print(head);
}
	
