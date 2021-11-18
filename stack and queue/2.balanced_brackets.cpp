#include <bits/stdc++.h>
using namespace std;

bool balanced(string str)
{
	stack<char> st;
	

	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == '('  || str[i] == '{' || str[i] == '['){
			st.push(str[i]);
		}
		else{
			if(str[i] == ')'){
				if(!st.empty() && st.top() == '('){
					st.pop();
				}
				else{
					return false;
				}
			}
			else if(str[i] == '}'){
				if(!st.empty() && st.top() == '{'){
					st.pop();
				}
				else{
					return false;
				}
			}
			else if(str[i] == ']'){
				if(!st.empty() && st.top() == '['){
					st.pop();
				}
				else{
					return false;
				}
			}
		}
	}

	cout << s.size() <<endl;

	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}


	return st.empty() == true;
}
int main()
{
	string str;
	getline(cin, str);

	if(balanced(str)){
		cout << "true\n";
	}
	else{
		cout << "false\n";
	}
}