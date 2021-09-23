#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n1, n2;
	cin>>n1;

	int a1[n1];
	map<int,int> mp;


	for(int i = 0; i < n1; i++){
		cin>>a1[i];
		mp[a1[i]]++;
	}

	cin>>n2;


	for(int i = 0; i < n2;  i++){
		
		int x;cin>>x;
		if(mp[x] > 0){
			cout << x << endl;
			mp[x] = 0;
		}
	}
}