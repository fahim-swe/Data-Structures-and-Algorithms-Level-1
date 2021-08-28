#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n)
{
	if(n==2) return true;
	if(n%2 == 0) return false;

	for(int i = 3; i*i <= n; i += 2){
		if(n%i == 0){
			return false;
		}
	}

	return true;
}
int main()
{
	int t;
	cin>>t;

	while(t--){
		long n;
		cin>>n;

		if(isPrime(n)){
			cout << "prime" <<endl;
		}
		else{
			cout << "not prime" << endl;
		}
	}
}