#include <bits/stdc++.h>
using namespace std;


vector<string> getPaths(int n)
{
	if(n==0){
		vector<string> v;
		v.push_back("");
		return v;
	}

	if(n < 0){
		vector<string> v;
		return v;
	}

	vector<string> path1 = getPaths(n-1);
	vector<string> path2 = getPaths(n-2);
	vector<string> path3 = getPaths(n-3);

	vector<string> paths;

	for(string str: path1){
		paths.push_back("1"+str);
	}

	for(string str: path2){
		paths.push_back("2"+str);
	}

	for(string str: path3){
		paths.push_back("3"+str);
	}

	return paths;
}

int main()
{
	int n;

	cin>>n;

	vector<string> ans = getPaths(n);

	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
}