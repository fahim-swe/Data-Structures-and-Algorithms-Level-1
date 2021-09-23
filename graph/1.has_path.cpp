// https://www.pepcoding.com/resources/online-java-foundation/graphs/has-path-official/ojquestion

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10000];
bool visited[10000];

void dfs(int node)
{
	visited[node] = true;
	for(auto child:adj[node]){
		if(!visited[child]){
			dfs(child);
		}
	}
}

int main()
{
	int vectex, eage;
	cin>>vectex>>eage;
	int a, b, w;
	for(int i = 0; i < eage; i++){
		cin>>a>>b>>w;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int sr, des;
	cin>>sr >> des;
	dfs(sr);
	
	if(visited[sr] && visited[des]){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
}