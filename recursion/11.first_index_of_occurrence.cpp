#include <bits/stdc++.h>
using namespace std;


int fast_idx(int a[], int ele, int idx, int n)
{
	if(idx == n){
		return -1;
	}

	if(a[idx] == ele){
		return idx;
	}

	return fast_idx(a, ele, idx+1, n);
}
int main()
{
	int a[] = {1, 3, 9, 8, 7, 6, 5, 8, 10};

	cout << fast_idx(a,8, 0, 9) << endl;
}