#include <bits/stdc++.h>
using namespace std;


int fast_pow(int x, int y)
{
	if(y==0){
		return 1;
	}

	if(y&1){
		return x*fast_pow(x,y-1);
	}
	else{
		int p = fast_pow(x,y/2);
		return p*p;
	}
}
int main()
{
	int x,y;
	cin>>x>>y;

	cout << fast_pow(x,y)<<endl;
}