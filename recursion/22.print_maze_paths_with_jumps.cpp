#include <bits/stdc++.h>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
	if(sr > dr && sc > dc){
		return;
	}

	if(sr == dr && sc == dc){
		cout<<psf<<endl;
	}

	// move to horizontal -> sc+1, sc+2, sc+3.....
	for(int jump = 1; jump <= dc-sc; jump++){
		printMazePaths(sr, sc+jump, dr, dc, psf+"h"+to_string(jump));
	}

	// move to vertical -> sr+1, sr+2, sr+3...
	for(int jump = 1; jump <= dr-sr; jump++){
		printMazePaths(sr+jump, sc, dr, dc, psf+"v"+to_string(jump));
	}

	// move to diagonal
	for(int jump = 1; jump <= dr-sr && jump <= dc-sc; jump++){
		printMazePaths(sr+jump, sc+jump, dr, dc, psf+"d"+to_string(jump));
	}
}

int main()
{
	int n, m;

	n = 3, m= 3;

	printMazePaths(0, 0, n-1, m-1, "");
}