#include <bits/stdc++.h>
using namespace std;

bool duplicate_check(string str)
{
	stack<char> st;

	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == ')'){
			if(st.top() == '('){
				return true;
			}
			else{
				while(st.top() != '('){
					st.pop();
				}
				st.pop();
			}
		}
		else{
			st.push(str[i]);
		}
	}

	return false;
}
int main()
{
	string str;
	cin>>str;

	if(duplicate_check(str)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}


}