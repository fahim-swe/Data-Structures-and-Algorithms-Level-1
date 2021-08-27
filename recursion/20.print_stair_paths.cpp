#include <bits/stdc++.h>
using namespace std;


void printStairPaths(int n, string ans){
	if(n==0){
		cout << ans << endl;
	}
	else if(n > 0){
		printStairPaths(n-1, ans+"1");
		printStairPaths(n-2, ans+"2");
		printStairPaths(n-3, ans+"3");
	}
}
int main()
{
	printStairPaths(3, "");
}



