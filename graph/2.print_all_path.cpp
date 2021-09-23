// https://www.pepcoding.com/resources/online-java-foundation/graphs/print-all-paths-official/ojquestion#!]

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10000];
bool visited[10000];

void dfs(int sr, int des, string paths)
{
	if(sr == des){
		cout << paths << endl;
		return ;
	}
	visited[sr] = true;
	for(auto child: adj[sr]){
		if(!visited[child]){
			dfs(child, des, paths + to_string(child));
		}
	}
	visited[sr] = false;
}
int main()
{
	int vertex, eage;
	cin>>vertex>>eage;
	int a, b, wt;
	for(int i = 0; i < eage; i++){
		cin>>a>>b>>wt;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int sr, des;
	cin>>sr>>des;
	dfs(sr, des, ""+to_string(sr));
}