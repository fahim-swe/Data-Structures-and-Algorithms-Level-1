#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int space = 2*n-3;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << j << "\t";
		}

		for(int j = 1; j <= space; j++){
			cout << "\t";
		}


		for(int j = (space != -1) ? i:i-1; j >= 1; j--){
			cout << j << "\t";
		}

		cout << endl;

		//cout << space << " " << i << endl;
		space -= 2;
	}
}