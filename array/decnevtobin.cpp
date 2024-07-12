#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    if(n<0){
      n = -n;
     }
  int m = ~n;
  int bit;
  long int ans=0;
  int i=0;
  while(m!=0){
    bit = m & 1;
    ans = (bit * pow(10,i)) + ans;
	m = m>>1;
    i++;
    }
	ans+=1;
	cout<<ans;
}
