#include<iostream>
using namespace std;
class node
{
public:
int data;
node* next;
node(int n)
{
	this->data=n;
	this->next=NULL;
}
~node()
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
class stack
{
  node* head;
  int capacity;
  int currsize;
public:
stack(int n)
{
  capacity=n;
  currsize=NULL;
}
bool isEmpty()
{	if(currsize<0){
    return true;
	}
	return false;   
}
bool Isfull()
{
  if(currsize==capacity){
    return true;
	}
	return false;
}
void push(int data1)
{
  if(currsize==capacity)
  {
    cout<<" overflow "<<endl;
    return;
  }
 node* new_node= new node(data1);
 new_node->next=head;
 head=new_node;
 currsize++;
 cout<<"top of stack after push "<<peek()<<endl;
}
int pop()
{
  if(head==NULL)
  {
    cout<<"underflow"<<endl;
    return -1;
  }
  node *temp=head;
  head=head->next;
  temp->next=NULL;
  delete temp;
  currsize--;
}
int peek()
{
	if(currsize>0)
  {
   return head->data;
  }
  return 0; 
}
};
int main()
{
	stack st(5);
	st.push(8);
	st.push(6);
	st.push(9);
	st.push(7);
	cout<<"is stack full "<<st.Isfull()<<endl;
	cout<<"is stack empty "<<st.isEmpty()<<endl;
	st.pop();
	cout<<"peek of stack after pop"<<st.peek()<<endl;	
}
