#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n;
	m= n;

	int matrix[n][m];

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			cin>>matrix[i][j];
		}
	}

	// row to colom
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++){
			swap(matrix[i][j], matrix[j][i]);
		}
	}



	for(int i = 0; i < n; i++)
	{
		int l = 0, r = m-1;
		while(l <= r){
			swap(matrix[i][l++], matrix[i][r--]);
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout <<endl;
	}
}