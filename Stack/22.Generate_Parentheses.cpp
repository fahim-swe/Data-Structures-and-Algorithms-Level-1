#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        set<string> validParenthesis;
        bool isValidParenthesis(string str)
        {
            stack<char> st;

            for(int i = 0; i < str.size(); i++){
                if(str[i] == '(') st.push(str[i]);
                else if(str[i] == ')'){
                    if(!st.empty() && st.top() == '(' ){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }

            return st.empty();
        }


        void generatePermutation(string str, string ans)
        {
            if(str.size() == 0){
                
                cout << ans << endl;
                if(isValidParenthesis(ans)){
                   validParenthesis.insert(ans);
                }
                return ;
            }

            for(int i = 0; i < str.size(); i++)
            {
               ans.push_back(str[i]);
               generatePermutation(str.substr(0, i)+str.substr(i+1), ans);
               ans.pop_back();
            }
        }


        vector<string> generateParenthesis(int n) {
            string str;
            for(int i = 0; i < n; i++){
                str.push_back('(');
                str.push_back(')');
            }
            generatePermutation(str, "");

            vector<string> ans;
            for(auto it = validParenthesis.begin(); it != validParenthesis.end(); it++){
                ans.push_back(*it);
            }
            return ans;
        }
};

int main()
{
    Solution S;
   auto ans = S.generateParenthesis(3);

    for(auto x: ans){
        cout << x << " " << endl;
    }

    S.generatePermutation("122", "");
}