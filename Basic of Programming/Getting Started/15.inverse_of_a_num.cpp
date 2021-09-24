// https://www.pepcoding.com/resources/online-java-foundation/getting-started/inverse-of-a-number-official/ojquestion

#include <bits/stdc++.h>
using namespace std;


int main()
{
	
	
	int n;
	cin>>n;

	int ans = 0;
	int p = 1;
	while(n > 0){
		int dig = n%10;
		n = n/10;
		ans += p*pow(10, dig-1);
		p++;
	}

	cout << ans << endl;

}