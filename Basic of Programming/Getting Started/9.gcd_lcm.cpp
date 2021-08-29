#include <bits/stdc++.h>
using namespace std;


long gcd(long a, long b)
{
	if(b==0) return a;
	else{
		return gcd(a%b, b);
	}
}
int main()
{
	long a, b;

	cin>>a>>b;

	cout <<__gcd(a,b)<<endl;
	cout<< (a*b)/__gcd(a,b) << endl;

}