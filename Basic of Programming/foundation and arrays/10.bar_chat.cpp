// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/bar-chart-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

// O(1) solution
void solve(int a[], int n)
{
	int mx = *max_element(a, a+n);

	for(int i = mx; i >= 1; i--)
	{
		for(int j = 1; j <= n; j++)
		{
			if(a[j-1] >= i)
			{
				cout << "*\t";
			}
			else{
				cout << "\t";
			}
		}

		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	solve(a, n);

	// int maxtrix[*max_element(a, a+n)][n];

	// memset(maxtrix, 0, sizeof(maxtrix));

	// for(int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < a[i]; j++)
	// 	{
	// 		maxtrix[j][i] = 1;
	// 	}
	// }

	
	// int mx = *max_element(a, a+n);

	// for(int i = mx-1; i >= 0; i--){
	// 	for(int j = 0; j < n; j++)
	// 	{
	// 		if(maxtrix[i][j] == 1){
	// 			cout <<"*\t";
	// 		}
	// 		else{
	// 			cout<<"\t";
	// 		}
	// 		//cout<<maxtrix[i][j] << " ";
	// 	}
	// 	cout<< endl;

	// }
}