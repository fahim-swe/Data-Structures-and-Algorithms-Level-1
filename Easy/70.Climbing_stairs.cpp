#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> dp;

    void fillDP()
    {
        for(int i = 0; i <= 100; i++) dp.push_back(-1);
    }
    int climbStairs(int n) {
        fillDP();
        
        return solve(n);
    }

    int solve(int n)
    {
        if(n < 0) return 0;
        if(n==0) return 1;

        if(dp[n] != -1) return dp[n];

        return dp[n] = solve(n-1) + solve(n-2);
    }
};


int main()
{
    int n;
    cin>>n;

    Solution S;
    cout << S.climbStairs(n) << endl;
}