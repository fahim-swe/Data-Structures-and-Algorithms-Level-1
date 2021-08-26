#include <bits/stdc++.h>
using namespace std;




void zig_zag(int x)
{
	if(x==1){
		cout << "1 1 1 ";
	}
	else{
		cout << x << " ";
		zig_zag(x-1);
		cout << x << " ";
		zig_zag(x-1);
		cout << x << " ";
	}

}




int main()
{
	int n;
	cin>>n;

	zig_zag(n);
}