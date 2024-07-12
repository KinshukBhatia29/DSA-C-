#include <iostream>
using namespace std;
void sum(int arr[3][4],int m,int n)
{
	for (int j = 0; j < 4; j++) {
 
        // If the current column
        // is even indexed, print
        // it in forward order
        if (j % 2 == 0) {
            for (int i = 0; i < 3; i++) {
                cout << arr[i][j] << " ";
            }
        }
 
        // If the current column
        // is odd indexed, print
        // it in reverse order
        else {
            for (int i = 2; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    
	
}

int main()
{
	int arr[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"matrix is"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"sine pattern"<<endl;
	sum(arr,3,4);
}
