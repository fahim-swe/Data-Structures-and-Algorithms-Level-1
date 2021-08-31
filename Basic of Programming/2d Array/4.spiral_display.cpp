// https://www.pepcoding.com/resources/online-java-foundation/2d-arrays/spiral-display-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;

	int matrix[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>matrix[i][j];
		}
	}


	int t = n*m, c = 0;
	
	pair<int,int> topleft, topright, buttomleft, buttomright;
	topleft = {0, 0};
	


}