#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bitset<10000010> bs;

void sieve(ll upperbound){
	ll _sievesize = upperbound+1;

	bs.set();
	bs[0] = bs[1] = false;
	
	for(ll i = 4; i <= _sievesize; i += 2){
		bs[i] = false;
	}

	for(ll i = 3; i*i <= _sievesize; i += 2){
		if(bs[i]){
			for(ll j = i*i; j <= _sievesize; j += i){
				bs[j] = false;
			}
		}
	}
}
int main()
{
	sieve(1000010);
	
	ll low, high;
	cin>>low >> high;

	for(ll i = low; i <= high; i++){
		if(bs[i]){
			cout<<i<<endl;
		}
	}
}


