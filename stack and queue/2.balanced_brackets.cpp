#include <bits/stdc++.h>
using namespace std;

bool balanced(string str)
{
	stack<char> st;

	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == '[' || str[i] == '{' || str[i] == '('){
			st.push(str[i]);
		}
		else{
			if(str[i] == ')'){
				if(!st.empty() && st.top() == '('){
					st.pop();
				}
			}
			else if(str[i] == '}'){
				if(!st.empty() && st.top() == '{'){
					st.pop();
				}
			}
			else if(str[i] == ']'){
				if(!st.empty() && st.top() == '['){
					st.pop();
				}
			}
		}
	}

	return st.empty();
}
int main()
{
	string str;
	cin>>str;

	if(balanced(str)){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}
}