// https://pepcoding.com/resources/online-java-foundation/time-and-space-complexity/count-sort-official/ojquestion#!

#include <bits/stdc++.h>
using namespace std;


void CountSort(int a[], int l, int r)
{
	int mi = *min_element(a, a+r+1);
	int mx = *max_element(a, a+r+1);

	int f[mx-mi];
	memset(f, 0, sizeof(f));

	for(int i = l; i <= r; i++)
	{
		f[a[i]-mi]++;
	}

	

	int j = 0;
	for(int i = 0; i < mx-mi; i++)
	{
		while(f[i] != 0){
			a[j++] = mx-mi + f[i];
			f[i]--;
		}
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

	CountSort(a, 0, n-1);

	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}