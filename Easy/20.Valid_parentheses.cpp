#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkedBraket(char ch1, char ch2)
    {
        if(ch1 == '(' && ch2 == ')') return true;
        if(ch1 == '{' && ch2 == '}') return true;
        if(ch1 == '[' && ch2 == ']') return true;


        return false;
    }
    bool isValid(string s) {
        stack<char> st;


        for(auto x: s)
        {
            if(!st.empty() && checkedBraket(st.top(), x)) {
                st.pop();
                continue;
            }

            st.push(x);
        }
        return st.empty();
    }
};

int main()
{
    string s;
    cin>>s;

    Solution S;
    cout << S.isValid(s) << endl;
}