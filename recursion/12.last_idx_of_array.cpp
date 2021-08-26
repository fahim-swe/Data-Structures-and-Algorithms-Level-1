#include <bits/stdc++.h>
using namespace std;


int last_idx(int a[], int ele, int idx, int n)
{
	if(idx == -1){
		return -1;
	}

	if(a[idx] == ele){
		return idx;
	}
	
	return last_idx(a, ele, idx-1, n);
	
}
int main()
{
	int a[] = {2, 3, 8, 6, 7, 8, 2, 1};
	int n = sizeof(a)/sizeof(a[0]);

	cout << last_idx(a, 8, n-1, n) << endl;
}

