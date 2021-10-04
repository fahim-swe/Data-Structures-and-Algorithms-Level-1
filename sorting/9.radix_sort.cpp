// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/radix-sort-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

void countSort(int a[], int n, int exp)
{
	int ans[n];

	int fre[10];

	memset(fre, 0, sizeof(fre));

	for(int i = 0; i < n; i++){
		int idx = (a[i]/exp)%10;
		fre[idx]++;
	}

	for(int i = 1; i < 10; i++){
		fre[i] = fre[i]+fre[i-1];
	}


	for(int i = n-1; i >= 0; i--)
	{
		int pos = fre[(a[i]/exp)%10]-1;
		ans[pos] = a[i];
		fre[(a[i]/exp)%10]--;
	}

	for(int i = 0;i < n; i++){
		a[i] = ans[i];
	}

	cout << "After sorting on " << exp << " place -> ";
	for(int i = 0; i < n; i++){
		cout << a[i]<< " ";
	}
	cout<<endl;
}


void radixSort(int a[], int n)
{
	int mx = *max_element(a, a+n);

	int exp = 1;

	while(exp <= mx){
		countSort(a, n, exp);
		exp = exp *10;
	}
}
int main()
{
	
	int n;
	cin>>n;

	int a[n];
	for(int i= 0; i < n; i++){
		cin>>a[i];
	}

	radixSort(a, n);

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}