#include <iostream>
#include <vector>
using namespace std;
unsigned long long nCr(int n,int r) {
    vector<vector<unsigned long long> >dp(n+1,vector<unsigned long long>(r+1,0));
    for (int i=0;i<= n;++i) {
        for (int j=0;j<=min(i,r);j++) {
            if (j==0||j==i)
                dp[i][j]=1;
            else
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    return dp[n][r];
}
int main() {
    int n, r;
    cout<<"Enter values of n: ";
    cin >>n;
    cout<<"Enter values of r: ";
    cin >>r;
    unsigned long long result=nCr(n, r);
    cout <<"nCr is: "<<result<< endl;
}

