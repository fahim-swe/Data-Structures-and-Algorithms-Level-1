#include <bits/stdc++.h>
using namespace std;


void Reverse(int n){
	if(n==0){
		return;
	}
	else{
		cout << n%10 <<endl;
		Reverse(n/10);
	}
}

int main()
{
	int n;
	cin>>n;

	Reverse(n);

	while(n != 0){
		cout<<n%10<<endl;
		n /= 10;
	}

	cout<<endl;

	
}