#include <bits/stdc++.h>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
	if(sr > dr || sc > dc){
		return;
	}

	if(sr == dr && sc == dc){
		cout<< psf<<endl;
		return;
	}

	// more to horizontal sc+1, add "h"
	printMazePaths(sr, sc+1, dr, dc, psf+"h");

	// move to vertical sr+1, add "v"
	printMazePaths(sr+1, sc, dr, dc, psf+"v");
}
int main()
{
	printMazePaths(0, 0, 1, 1, "");
}