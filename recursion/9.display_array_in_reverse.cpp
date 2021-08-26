#include <bits/stdc++.h>
using namespace std;


void display_array_reverse(int a[], int idx, int n)
{
	if(idx == n){
		return;
	}
	else{
		display_array_reverse(a, idx+1, n);
		cout << a[idx] << " ";
	}
}
int main()
{
	int a[] = {1, 2, 3, 4, 5};

	display_array_reverse(a, 0, 5);
}