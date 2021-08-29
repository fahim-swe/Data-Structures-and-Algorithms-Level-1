#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;


	int f1 = 0, f2 = 1;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++)
		{
			cout << f1 << "\t";
			int f3 = f1+f2;
			f1 = f2;
			f2 = f3;
		}
		cout<<endl;
	}
}