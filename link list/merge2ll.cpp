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
void solve(Node * &head1,Node *&head2)
{//only onle elementin ll1
if(head1->next=NULL)
{
	head1->next=head2;
}
	Node* curr1=head1;
	Node *next1=curr1->next;
	Node* curr2=head2;
	Node *next2=curr2->next;
	if(curr1->data<curr2->data && next1->data>curr2->data)
	{
		curr1->next=curr2;
		next2=curr2->next;
		curr2->next=next1;
		curr1=curr2;
		curr2=next2;
	}
	else
	{
		curr1=next1;
		next1=next1->next;
		if(next1=NULL)
		{
			curr1->next=curr2;
		}
	}
}
void merge(Node * &head1,Node *&head2)
{
	if(head1 =NULL)
	{
		print(head2);
	}
	else if(head2 =NULL)
	{
		print(head1);
	}
	else
	{
		if(head1->data<=head2->data)
		{
			solve(head1,head2);
		}
		else
		{
			solve(head2,head1);
		}
	}	
}
int main()
{
	Node* n1=new Node(10);
	Node* n2=new Node(30);
	Node* n3=new Node(50);
	Node* n4=new Node(70);
	Node* n5=new Node(90);
	Node* h1=new Node(20);
	Node* h2=new Node(40);
	Node* h3=new Node(60);
	Node* h4=new Node(80);
	Node* h5=new Node(100);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	h1->next=h2;
	h2->next=h3;
	h3->next=h4;
	h4->next=h5;
	Node *head=n1;
	Node *head1=h1;
	cout<<"First LL"<<endl;
	print(head);
	cout<<"Second LL"<<endl;
	print(head1);
	merge(head,head1);
	print(head);
}
