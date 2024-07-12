#include<iostream>
using namespace std;
class heap
{
	public:
		int arr[100];
		int size;
		
		heap()
		{
			arr[0]=-1;
			size=0;
		}
		void insert(int val)
		{
			size=size+1;
			int index=size;
			arr[index]=val;
			while(index>1)
			{
			int parent=index/2;
			if(arr[index]>arr[parent])
			{
				swap(arr[index],arr[parent]);
				index=parent;
			}
			else
			{
				return;
			}
		}
		}
		void print()
		{
		for(int i=1;i<=size;i++)
		{
			cout<<arr[i]<<" ";
			}cout<<endl;
		}
		void deletefromHeap()
		{ if(size==0)
		{
			cout<<"nothing to delete"<<endl;
		}
			//put value of last index at 1st index
			arr[1]=arr[size];
			//remove last node
			size--;
			int i=1;
			//propagate root at its right position
			while(i<size)
			{
				int lefti=2*i;
				int righti=2*i+1;
				if(lefti<size && arr[i]<arr[lefti])
				{
					swap(arr[i],arr[lefti]);
					i=lefti;
				}
				if(righti<size && arr[i]<arr[righti])
				{
					swap(arr[i],arr[righti]);
					i=righti;
				}
				else {
					return;
				}
				
			}
		}
};
void heapify(int arr[],int n,int i)
{
	int largest=i;
	int left=2*i;
	int right=2*i+1;
	if(left<=n && arr[largest]<arr[left])
	{
		largest=left;
	}
	if(right<=n && arr[largest]<arr[right])
	{
		largest=right;
	}
	if(largest!=i)
	{
		swap(arr[largest],arr[i]);
		heapify(arr,n,largest);
	}
}
void heapsort(int arr[],int n)
{
	int size=n;
	while(size>1){
	swap(arr[1],arr[size]);
	size--;
	heapify(arr,size,1);
	}
}
int main()
{
	heap h;
	h.insert(20);
	h.insert(30);
	h.insert(40);
	h.insert(50);
	h.print();
	h.deletefromHeap();
	h.print();
	int arr[6]={-1,2,3,4,5,6};
	int n=5;
	for(int i=n/2;i>0;i--)
	{
		heapify(arr,n,i);
	}
	for (int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
	cout<<"After sorting:"<<endl;
	heapsort(arr,n);
	for (int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}
