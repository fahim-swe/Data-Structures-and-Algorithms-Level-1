#include <bits/stdc++.h>
using namespace std;

vector<string> data;

vector<string> kpc(string str)
{
	if(str == ""){
		vector<string> v;
		v.push_back("");
		return v;
	}

	string t = data[str[0]-'0'];

	vector<string> rres = kpc(str.substr(1));

	vector<string> mres;

	for(int i = 0; i < t.size(); i++){
		for(int j = 0; j < rres.size(); j++){
			mres.push_back(t[i]+rres[j]);
		}
	}

	return mres;
}

int main()
{
	data.push_back(".,");
	data.push_back("abc");
	data.push_back("def");
	data.push_back("ghi");
	data.push_back("jkl");
	data.push_back("mno");
	data.push_back("pqrs");
	data.push_back("tu");
	data.push_back("vwx");
	data.push_back("yz");

	string str;
	cin>>str;

	vector<string> ans = kpc(str);
	

	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
}