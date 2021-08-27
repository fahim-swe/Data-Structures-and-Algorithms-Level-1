#include <bits/stdc++.h>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf)
{
	if(sr == dr && sc == dc){
		cout << psf << endl;
		return;
	}
	
	if(sr < dr){
		printMazePaths(sr+1, sc, dr, dc, psf+"h");
	}

	if(sc < dc){
		printMazePaths(sr, sc+1, dr, dc, psf+"v");
	}
}
int main()
{
	printMazePaths(0, 0, 1, 1, "");
}