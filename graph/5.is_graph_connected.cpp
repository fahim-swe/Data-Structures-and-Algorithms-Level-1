// https://www.pepcoding.com/resources/online-java-foundation/graphs/is-graph-connected-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

void dfs(int node){
	visited[node] = true;
	for(auto child: adj[node]){
		if(!visited[child]){
			dfs(child);
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

	dfs(0);

	bool f = true;
	for(int i = 0; i < vertex; i++){
		if(!visited[i]){
			f = false;
			break;
		}
	}

	if(f){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
}