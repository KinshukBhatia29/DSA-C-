#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
	int arr[6]={1,2,3,3,4,4};
    unordered_map<int, int>count;
    int maxFreq=0;
    int maxAns=0;
    for (int i=0;i<6;i++)
    {
    	count[arr[i]]++;
    	maxFreq=max(maxFreq,count[arr[i]]);
	}
	for (int i=0;i<6;i++)
	{
		if(maxFreq==count[arr[i]])
		{
			maxAns=arr[i];
		}
	}
	cout<<"ans is   "<<maxAns;
}

