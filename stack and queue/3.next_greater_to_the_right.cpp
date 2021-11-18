#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	stack<int> st;
	vector<int> v;
	for(int i = n-1; i >= 0; i--)
	{
		while(!st.empty() && st.top() < a[i]){
			st.pop();
		}

		if(st.empty()){
			v.push_back(-1);
		}
		else{
			v.push_back(st.top());
		}

		st.push(a[i]);
	}	

	reverse(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		cout << v[i] << endl;
	}
	
}