#include <bits/stdc++.h>
using namespace std;


int fast_pow(int x, int y)
{
	if(x==0 || y==0){
		return 1;
	}

	if(y&1){
		return fast_pow(x, y-1)*x;
	}
	else{
		return fast_pow(x,y/2)*fast_pow(x,y/2);
	}
}
int pow(int x,int y)
{
	if(y==0){
		return 1;
	}
	else{
		return pow(x,y-1)*x;
	}
}
int main()
{
	int x,y;
	cin>>x>>y;

	cout << pow(x,y)<<endl;
	cout << fast_pow(x,y)<<endl;
}