// https://www.pepcoding.com/resources/online-java-foundation/graphs/is-cyclic-official/ojquestion#!


#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

bool dfs(int node, int par)
{
	visited[node] = true;

	for(auto child: adj[node]){
		if(visited[child] && child != par){
			return true;
		}
		else if(!visited[child]){
			return dfs(child, node);
		}
	}

	return false;
}


bool isCyelc(int node)
{
	queue<int> q;
	visited[node] = true;

	while(!q.empty()){
		int ver = q.front();
		if(visited[ver] == true){
			return true;
		}

		for(auto child: adj[ver]){
			if(!visited[child]){
				q.push(child);
			}
		}
	}

	return false;
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


	for(int i = 0; i < vertex; i++){
		if(!visited[i]){
			bool f = isCyelc(i);
			if(f){
				cout << "true" << endl;
				return 0;
			}
		}
	}


	cout << "false" << endl;



}