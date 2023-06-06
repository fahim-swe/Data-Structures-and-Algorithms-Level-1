#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<string> result;


        void solve(string s, int open, int close, int n)
        {
            if(open == n && close == n){
                result.push_back(s);
            }

            if(open < n) solve(s + "(", open+1, close, n);
            if(close < open) solve(s + ")", open, close+1, n);

        }
        vector<string> generateParenthesis(int n) {
            solve("", 0, 0, n);

            return result;
        }
};

int main()
{
    Solution S;
   auto ans = S.generateParenthesis(3);

    for(auto x: ans){
        cout << x << " " << endl;
    }

    
}