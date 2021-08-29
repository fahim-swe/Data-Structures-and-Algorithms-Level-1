#include <bits/stdc++.h>
using namespace std;

bool f(long a, long b, long c)
{
	return (a*a) == ((b*b)+(c*c));
}
int main()
{
	long a, b, c;

	cin>>a>>b>>c;


	if(f(a,b,c)){
		cout << "true" << endl;
	}
	else if(f(b,a,c)){
		cout<<"true" << endl;
	}
	else if(f(c,a,b)){
		cout<<"true" << endl;
	}
	else{
		cout<<"false" << endl;
	}
}