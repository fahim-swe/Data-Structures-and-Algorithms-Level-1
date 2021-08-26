// pdi(5) = 5, 4, 3, 2, 1, 1, 2, 3, 4, 5

#include <bits/stdc++.h>
using namespace std;


void pdi(int n)
{
	if(n != 0){
		cout << n << ", ";
		pdi(n-1);
		cout << n << ", ";
	}
}
int main()
{
	int n;
	cin>>n;

	pdi(n);
}