#include <iostream>
using namespace std;
bool subset(int arr[],int n,int sum){
    bool memory[n+1][sum+1];
    for (int i=0;i<=n;i++){
        memory[i][0] = true;
    }
    for (int i=1;i<=sum;i++){
        memory[0][i] = false;
    }
    for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=sum;j++)
		{
            if(arr[i-1]<=j)
			{
                memory[i][j]=memory[i-1][j]||memory[i-1][j-arr[i-1]];
            } else
			{
                memory[i][j]=memory[i-1][j];
            }
        }
    }
    return memory[n][sum];
}
int main() {
	int cnt=1;
    int arr[100];
    int n,sum;
    cout<<"enter the size of set: "<<endl;
    cin>>n;
    cout<<"enter the set: "<<endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	while(cnt){
	cout<<"enter the sum to find in set"<<endl;
	cin>>sum;
    if (subset(arr,n,sum)){
        cout<<"True"<<endl;
    }
	else{
        cout<<"False"<<endl;
    }
    cout<<"want to continue 0/1"<<endl;
    cin>>cnt;
}
    return 0;
}
