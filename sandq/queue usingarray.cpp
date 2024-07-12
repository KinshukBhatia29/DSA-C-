#include<iostream>
using namespace std;
class queue
{
	public:
		int*arr;
		int size;
		int front ;
		int rear;
	queue()
	{
		size=10000;
		arr=new int[size];
		front=0;
		rear=0;
	}	
void enque(int d ){

	if (rear==size)
	cout<<"queue filled";
	else
	{
		arr[rear]=d;
		rear++;
	}
}
int deque()
{
	if(front==rear)
	{
		return -1;
	}
	else
	{
		int ans=arr[front];
		arr[front]=-1;
		front++;
		
		if(front==rear)
		{
			front=0;
			rear=0;
		}
		return ans;
	}
}
int Qfront()
{
	if(front==rear)
	{
		return -1;
	}
	else
	return arr[front];
}
bool IsEmpty()
{
	if(front==rear)
	return true;
	else
	return false;
}

};
int main()
{
	queue q1;
	q1.enque(1);
	q1.enque(2);
	q1.enque(3);
	q1.enque(4);
	cout<<q1.deque()<<endl;
	cout<<q1.Qfront()<<endl;
	cout<<q1.deque()<<endl;
	cout<<q1.deque()<<endl;
	cout<<q1.Qfront()<<endl;
	if(q1.IsEmpty())
	{
	cout<<"q is filled"<<endl;}
	else
	{
	cout<<"sq empty"<<endl;}
}
