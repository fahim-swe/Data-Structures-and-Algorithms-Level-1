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

	int k;
	cin>>k;

	multiset<int> s;
	for(int i = 0; i < k-1; i++){
		s.insert(a[i]);
	}
	for(int i = 0; i < n-k+1; i++){
		s.insert(a[i+k-1]);
		cout << *max_element(s.begin(), s.end()) << endl;
		s.erase(*s.find(a[i]));
	}
}