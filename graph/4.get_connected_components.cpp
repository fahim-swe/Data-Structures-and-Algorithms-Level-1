// https://www.pepcoding.com/resources/online-java-foundation/graphs/gcc-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

void dfs(int node, vector<int> &paths){
	paths.push_back(node);
	visited[node] = true;
	for(auto child: adj[node]){
		if(!visited[child]){
			dfs(child, paths);
		}
	}
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

	vector<vector<int>> ans;
	for(int i = 0; i < vertex; i++){
		if(!visited[i]){
			vector<int> paths;
			dfs(i, paths);
			ans.push_back(paths);
		}
	}


	cout << "[";
	for(int i = 0; i < ans.size()-1; i++){
		cout << "[";
		
		for(int j = 0; j < ans[i].size()-1; j++){
			cout << ans[i][j] << ", ";
		}

		cout << ans[i][ans[i].size()-1] << "], ";
	}

	cout << "[";
	for(int i = 0; i < ans[ans.size()-1].size()-1; i++){
		cout << ans[ans.size()-1][i] << ", ";
	}
	cout << ans[ans.size()-1][ans[ans.size()-1].size()-1];
	cout << "]]";
}