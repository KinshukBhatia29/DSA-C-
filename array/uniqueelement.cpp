#include<iostream>
using namespace std;
void unique(int arr[],int size)
{int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum^arr[i];
    }
    cout<<"unique number"<<sum<<endl;
}
int main ()
{
    int array[5]={1,1,2,5,5};
    unique(array,5);
}*/
/*#include <iostream>

using namespace std;
int unique(int a[],int n)
{int r=0;
for (int j = 0; j < n; j++) {
        for (int k = 0; k < j; k++) {
            if (a[k] != a[j]) r++;
        }
        cout<<"unique element is "<<a[j];
    }
    return r;
}

int main() {
    int k, a[50], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    k=unique(a,n);
    
    cout << k << endl;
    return 0;
}*/*
