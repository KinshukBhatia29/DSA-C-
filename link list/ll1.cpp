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
void Insertathead(Node*& head, int d){
    Node* temp=new Node(d);
    temp -> next=head;
    head=temp;
}
void Insertattail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail -> next=temp;
    tail=temp;
}
void insertp(Node* &tail,Node*& head,int pos,int d)
{//insert at start
	if(pos==1)
	{
		Insertathead(head,d);
		return;
	}
Node* temp=head;
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
	temp->next=nodetoinsert;  

}
void deletep(Node*& head,int pos)
{if(pos==1)
{
	Node *temp=head;
	head=head->next;      
	//memory free node
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
prev->next=cur->next;
cur->next=NULL;
delete cur;
}
}
void deleted(Node*& head,int d)
{
Node* cur=head;
Node* prev=NULL;
int cnt=1;
while(cur->data!=d)
{
	prev=cur;
	cur=cur->next;
	cnt++;
}
prev->next=cur->next;
cur->next=NULL;
delete cur;
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
void print(Node * &head)
{Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp -> data<<"->";
		temp=temp->next;
			}
	cout<<endl;
}
void reversal(Node *&head)
{
	Node* curr=head;
	Node* prev=NULL;
	Node* forward=NULL;
	while(curr!=NULL)
	{
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	cout<<"reverse ll";
	head = prev;
	print(head);
}
int main()
{
	Node *n1=new Node(10);
	cout<<n1->data<<endl;
	//cout<<n1->next;
	Node *head=n1;
	/*Insertathead(head,12);
	Insertathead(head,15);*/
	//print(head);
	Node *tail=n1;
	Insertattail(tail,12);
	Insertattail(tail,11);
	Insertattail(tail,13);
	Insertattail(tail,15);
	Insertattail(tail,17);
	print(head);
	insertp(tail,head,5,40);
	print(head);
	deletep(head,3);
	print(head);
	deleted(head,12);
	print(head);
	int n=getlen(head);
	cout<<"length is"<<n<<endl;
	reversal(head);
}

