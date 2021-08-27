#include <bits/stdc++.h>
using namespace std;

vector<string> getMazePaths(int sr, int sc, int dr, int dc)
{
	if(sr == dr && sc == dc){
		vector<string> v;
		v.push_back("");
		return v;
	}

	vector<string> path1;
	vector<string> path2;
	vector<string> paths;

	if(sr < dr){
		path1 = getMazePaths(sr+1, sc, dr, dc);
	}
	if(sc < dc){
		path2 = getMazePaths(sr, sc+1, dr, dc);
	}

	for(string path:path1){
		paths.push_back("h"+path);
	}

	for(string path:path2){
		paths.push_back("v"+path);
	}

	return paths;
}
int main()
{
	int n, m;
	cin>>n>>m;

	vector<string> ans = getMazePaths(0, 0, n-1, m-1);

	for(int i = 0; i < ans.size(); i++){
		cout<<ans[i]<<" ";
	}


}