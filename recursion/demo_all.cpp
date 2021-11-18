#include <bits/stdc++.h>
using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc){
	if(sr > dr || sc > dc){
		return {};
	}
	else if(sr == dr && sc == dc){
		return {""};
	}

	vector<string> path1 = get_maze_paths(sr+1, sc, dr, dc);
	vector<string> path2 = get_maze_paths(sr, sc+1, dr, dc);

	vector<string> paths;
	for(auto path: path1){
		paths.push_back("v" + path);
	}
	for(auto path: path2){
		paths.push_back("h" + path);
	}

	return paths;
}




int main()
{
	int r, c;
	cin>>r>>c;


	vector<string> paths = get_maze_paths(0, 0, r-1, c-1);

	cout << "[";

	for(int i = 0; i < paths.size(); i++){
		if( i == paths.size()-1){
			cout << paths[i];
		}
		else{
			cout << paths[i] << ", ";
		}
	}

	cout << "]";
}