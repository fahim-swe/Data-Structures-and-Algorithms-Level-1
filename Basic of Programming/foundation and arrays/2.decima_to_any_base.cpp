#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d, b;
	cin>>d>>b;


	int ans = 0;

	int p = 0;

	
	while(d != 0){
		//cout << d%b<<endl;

		ans += (d%b)*pow(10, p++);
		d /= b;
	}

	cout << ans<<endl;
	
}