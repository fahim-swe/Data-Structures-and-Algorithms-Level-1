#include <bits/stdc++.h>
using namespace std;

int max_ele(int a[], int idx, int n)
{
	if(idx == n-1){
		return a[idx];
	}

	int mx = max_ele(a, idx+1, n);
	return max(mx, a[idx]);
}
int main()
{
	int a[] = {15, 30, 40, 4, 11, 9};
	cout << max_ele(a, 0, 6);
}