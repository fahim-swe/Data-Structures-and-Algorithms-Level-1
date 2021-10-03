// https://www.pepcoding.com/resources/online-java-foundation/graphs

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

void bfs(int node)
{
	queue<pair<int,string>> q;
	q.push({node, ""+to_string(node)});
	
	visited[node] = true;

	while(!q.empty()){
		

		int ver = q.front().first;
		string path = q.front().second;

		cout << ver << "@" << path << endl;
		q.pop();

		for(auto child: adj[ver]){
			if(!visited[child]){
				q.push({child, path+to_string(child)});
				visited[child] = true;
			}
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

	int src;
	cin>>src;


	bfs(src);
}