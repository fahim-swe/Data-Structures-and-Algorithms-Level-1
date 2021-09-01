#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;

	cin>>str;

	for(int i = 0; i < str.size()-1; i++)
	{
		int val = (int)str[i+1]-(int)str[i];
		cout << str[i];
		cout << val;
	}

	cout << str[str.size()-1];
}