#include <bits/stdc++.h>
using namespace std;


void display(int a[],int idx, int n)
{
	if(idx == n) return ;
	else{
		cout << a[idx] << " ";
		display(a, idx+1, n);
	}
}
int main()
{
	int a[] = {1, 2, 3, 4, 5};

	display(a,0, 5);
}