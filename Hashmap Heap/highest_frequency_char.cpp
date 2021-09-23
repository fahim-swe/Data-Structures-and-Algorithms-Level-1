#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;

	cin>>str;

	map<char, int> mp;

	for(int i = 0; i < str.size(); i++){
		mp[str[i]]++;
	}

	char ch = str[0];
	int c = 1;

	for(auto it= mp.begin();  it != mp.end(); it++){
		if(it->second > c){
			ch = it->first;
			c = it->second;
		}
	}

	cout << ch << endl;
}