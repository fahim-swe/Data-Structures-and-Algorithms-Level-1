#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();


                if(tokens[i] == "/") val1 = val2/val1;
                else if(tokens[i] == "*") val1 = val1*val2;
                else if(tokens[i] == "-") val1 = val2-val1;
                else if(tokens[i] == "+") val1 = val1+val2;

                st.push(val1);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }

        return st.top();    
    }
};


int main()
{
    vector<string> input = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};

    
    Solution S;
    cout << S.evalRPN(input) << endl;
}