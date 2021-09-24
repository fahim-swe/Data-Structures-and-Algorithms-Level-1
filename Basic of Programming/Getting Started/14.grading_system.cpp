#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	if(n > 90){
		cout << "excellent\n";
	}
	else if( n > 80 && n <= 90){
		cout << "good\n";
	}
	else if( n > 70 && n <= 80){
		cout << "fair\n"; 
	}
	else if( n > 60 && n <= 70){
		cout << "meets expectations\n";
	}
	else{
		cout << "below par\n";
	}
}