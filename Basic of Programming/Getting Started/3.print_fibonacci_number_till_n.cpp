#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int f0 = 0, f1 = 1;

	for(int i = 0; i < n; i++){
		cout<<f0<<endl;

		int c = f0+f1;
		f0 = f1;
		f1 = c;
	}
}