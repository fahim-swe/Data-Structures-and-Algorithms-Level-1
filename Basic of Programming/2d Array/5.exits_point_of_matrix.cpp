// https://www.pepcoding.com/resources/online-java-foundation/2d-arrays/exit-point-matrix-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;

	int matrix[n][m];

	for(int i= 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>matrix[i][j];
		}
	}



	int dir = 0, i = 0, j = 0;

	while(i < n && j < m)
	{
		if(matrix[i][j] == 0)
		{
			if(dir==0){
				j++;
			}
			else if(dir==1){
				j--;
			}
			else if(dir==2){
				i--;
			}
			else if(dir==3){
				i++;
			}
		}
		else{
			if(dir==0){
				dir = 3;
				i++;
			}
			else if(dir==1){
				dir = 2;
				i--;
			}
			else if(dir==2){
				dir = 0;
				j++;
			}
			else{
				dir = 1;
				j--;
			}
		}
	}

	

	//cout << i << " " << j << endl;
	if(i==n)i--;
	if(j==n)j--;

	cout << i << endl;
	cout << j << endl;
}