// https://www.pepcoding.com/resources/online-java-foundation/2d-arrays/diagonal-traversal-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int matrix[n][n];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++){
			cin>>matrix[i][j];
		}
	}

	for(int i = 0; i < n; i++)
	{
		int row = 0, col = i;
		
		while(col < n){
			cout << matrix[row++][col++] << endl;
		}
	}
}