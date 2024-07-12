#include<iostream>
using namespace std;
const int MAX_SIZE = 10;
int binarysearch(int arr[MAX_SIZE][MAX_SIZE],int row,int col,int k)
{int m=row;
int n=col;
	int start=0;
	int end=(row*col)-1;
	int mid=start+((end-start)/2);
	while(start<=end)
	{int element=arr[mid/n][mid%n];
		if(element==k)
		{
			return mid;
		}
		else if(k>element)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+((end-start)/2);
	}
	return -1;
	
}
int main() {
    int m, n,k;
    cout << "Enter number of rows and columns in sorted matrix: ";
    cin >> m >> n;

    int arr[MAX_SIZE][MAX_SIZE];
    cout << "Enter elements of sorted matrix:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
            for (int i = 0; i < m; ++i){
	
        for (int j = 0; j < n; ++j){
	
            cout<< arr[i][j]<<" ";}
            cout<<endl;}
cout<<"enter the element";
cin>>k;

    
   int index=binarysearch(arr, m, n,k);
cout<<"the key is at "<<index<<" position"<<endl;
    return 0;
}
