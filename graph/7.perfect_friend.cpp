// https://www.pepcoding.com/resources/online-java-foundation/graphs/perfect-friends-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10000];
bool visited[10000];

void dfs(int node, int &c){
	visited[node] = true;
	for(auto child: adj[node]){
		if(!visited[child]){
			c++;
			dfs(child, c);
		}
	}
}
int main()
{
	int n, m;
	cin>>n>>m;

	for(int i = 0; i < m; i++){
		int a, b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vector<int> v;

	for(int i = 0; i < n; i++){
		if(!visited[i]){
			int c = 1;
			dfs(i, c);
			v.push_back(c);
		}
	}

	int ans = 0;

	for(int i = 0; i < v.size(); i++){
		for(int j = i+1; j < v.size(); j++){
			ans += v[i]*v[j];
		}
	}
	cout << ans << endl;
}

