#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerToLeft(int a[], int n)
{
	vector<int> ans;

	stack<int> st;

	for(int i = 0; i < n; i++)
	{
		while(!st.empty() && a[st.top()] >= a[i]){
			st.pop();
		}

		if(st.empty()){
			ans.push_back(-1);
		}
		else{
			ans.push_back(st.top());
		}

		st.push(i);
	}

	return ans;
}


vector<int> nextSmallerToRight(int a[], int n)
{
	vector<int> ans;

	stack<int> st;

	for(int i = n-1; i >= 0; i--)
	{
		while(!st.empty() && a[st.top()] >= a[i]){
			st.pop();
		}
		if(st.empty()){
			ans.push_back(n);
		}
		else {
			ans.push_back(st.top());
		}

		st.push(i);
	}

	reverse(ans.begin(), ans.end());

	return ans;
}



int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	vector<int> rs = nextSmallerToRight(a, n);
	vector<int> ls = nextSmallerToLeft(a, n);

	int ans = 0;

	

	for(int i = 0; i < n; i++)
	{
		ans = max(ans, a[i]*(rs[i]-ls[i]-1));
	}

	cout << ans << endl;
}