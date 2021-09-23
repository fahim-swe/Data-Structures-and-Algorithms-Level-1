// https://www.pepcoding.com/resources/online-java-foundation/graphs/hamiltonian-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int vertex, eage;
vector<int> adj[10000];
bool visited[10000];

bool allvisited()
{
	for(int i = 0; i < vertex; i++){
		if(!visited[i]){
			return false;
		}
	}

	return true;
}
void dfs(int node, int src, string paths)
{
	visited[node] = true;

	if(allvisited()){
		cout << paths;

		bool f = false;
		
		for(auto child: adj[src]){
			if(child == node){
				f = true;
				break;
			}
		}

		if(f){
			cout <<"*" << endl;
		}
		else{
			cout << "." << endl;
		}
	}

	
	for(auto child: adj[node]){
		if(!visited[child]){
			dfs(child, src, paths+to_string(child));
		}
	}

	visited[node] = false;
}
int main()
{
	
	cin>>vertex>>eage;
	int a, b, wt;

	for(int i = 0; i< eage; i++){
		cin>>a>>b>>wt;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int src;
	cin>>src;

	
	dfs(src, src, ""+to_string(src));

}