#include <bits/stdc++.h>
using namespace std;

vector<string> sub_sequence(string str)
{

	if(str == ""){
		vector<string> v;
		v.push_back("");
		return v;
	}

	char ch = str[0];

	string sub = str.substr(1);

	vector<string> rres = sub_sequence(sub);

	vector<string> mres;

	for(int i = 0; i < rres.size(); i++){
		mres.push_back(rres[i]);
		mres.push_back(rres[i]+ch);
	}

	return mres;

}

int main()
{
	string str;
	cin>>str;

	

	vector<string> ans = sub_sequence(str);

	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}

}