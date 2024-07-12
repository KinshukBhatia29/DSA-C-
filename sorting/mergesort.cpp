#include<iostream>
using namespace std;
void printarray(int arr[],int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<< " ";
    }
}
void merge(int a[], int l, int m, int r) { 
    int k1 =m-l+1;
    int k2 =r-m;
    int a1[k1];
    int a2[k2];
    for(int i=0;i<k1;i++) {
        a1[i]=a[l+i];
    }
    for(int j=0;j<k2;j++){
        a2[j]=a[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<k1&&j<k2) {
        if(a1[i]<=a2[j]) {
            a[k]=a1[i];
            i++;
        } else {
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    
    while(i<k1) {
        a[k]=a1[i];
        i++;
        k++;
    }
    
    while(j<k2) {
        a[k]=a2[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
	if (l>=r)
	return;
	int m =l+(r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

int main() {
    int n;
    int arr[100];
    cout << "Enter the number of elements: ";
    cin >> n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    printarray(arr, n);
 }

