// https://pepcoding.com/resources/online-java-foundation/time-and-space-complexity/count-sort-official/ojquestion#!

#include <bits/stdc++.h>
using namespace std;


void CountSort(int a[], int n, int mn, int mx)
{
	int fre[mx-mn+1];
	memset(fre, 0, sizeof(fre));

	// count fre
	for(int i = 0; i < n; i++)
	{
		int idx = a[i]-mn;
		fre[idx]++;
	}

	// prefix sum
	for(int i = 1; i < mx-mn+1; i++){
		fre[i] = fre[i]+fre[i-1];
	}
	

	// update main array
	int ans[n];
	for(int i = n-1; i >= 0; i--)
	{
		int val = a[i];
		int pos = fre[val-mn];
		int idx = pos-1;

		ans[idx] = val;
		fre[val-mn]--;
	}

	for(int i = 0; i < n; i++){
		a[i] = ans[i];
	}
}



int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	CountSort(a, n, *min_element(a, a+n), *max_element(a, a+n));

	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}

	
}