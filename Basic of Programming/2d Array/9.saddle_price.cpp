// https://www.pepcoding.com/resources/online-java-foundation/2d-arrays/saddle-price-official/ojquestion

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


	int ans = -1;
	bool f = false;


	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			
			int mn = matrix[i][j];
			for(int l = 0; l < n; l++)
			{
				mn = min(mn, matrix[i][l]);
			}

			int mx = matrix[i][j];
			for(int l = 0; l < n; l++)
			{
				mx = max(mx, matrix[l][j]);
			}

			//cout << mn << " " << mx <<endl;

			if(mx == mn)
			{
				f = true;
				ans = mx;
			}
		}
	}

	if(f){
		cout << ans <<endl;
	}
	else{
		cout << "Invalid input" << endl;
	}
	
}