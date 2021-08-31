#include <bits/stdc++.h>
using namespace std;

int digitFrequency(long n, int d)
{
	int fq = 0;
	while(n!=0){
		if(n%10 == d){
			fq++;
		}
		n /= 10;
	}
	return fq;
}
int main()
{
	long n;
	cin>>n;

	int d;
	cin>>d;

	cout << digitFrequency(n, d) << endl;

}