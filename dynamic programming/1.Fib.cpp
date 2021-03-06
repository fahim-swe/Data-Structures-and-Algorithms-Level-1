#include <bits/stdc++.h>
using namespace std;

int dp[100];
int fibonacci(int n)
{
    if(n==0 || n==1) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n]=fibonacci(n-1)+fibonacci(n-2);
}   

int main()
{
    int nth;
    cin>>nth;

    memset(dp, -1, sizeof(dp));

    cout << fibonacci(nth) << endl;
}