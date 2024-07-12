#include<iostream>
using namespace std;
class stack
{
	public:
		int *arr;
		int size;
		int top;
		stack(int size)
		{
			arr=new int[size];
			top=-1;
			this->size=size;
		}
		void push(int element)
		{
			if(size-top>1)
			{
				top++;
				arr[top]=element;
			}
			else
			{
				cout<<"stack overflow"<<endl;
			}	
		}
	void pop()
	{
		if(top>-1)
		{
			top --;
		}
		else
		{
			cout<<"stack underflow";
		}
	}
	int peak()
	{
		if(top<0)
		cout<<"stack has no element";
		else
		return arr[top];
	}
	bool IsEmpty()
	{
		if(top==-1)
		return false;
		else
		return true;
		}	
};
int main()
{
	stack st(5);
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(56);
	cout<<st.peak()<<endl;
	st.pop();
	cout<<st.peak()<<endl;
	st.pop();
	cout<<st.peak()<<endl;
	st.pop();
	cout<<st.peak()<<endl;
	st.pop();
	cout<<st.peak()<<endl;
	if(st.IsEmpty())
	cout<<"stack is filled"<<endl;
	else
	cout<<"stack empty"<<endl;
	st.pop();
		if(st.IsEmpty())
	cout<<"stack is filled";
	else
	cout<<"stack empty";
}
