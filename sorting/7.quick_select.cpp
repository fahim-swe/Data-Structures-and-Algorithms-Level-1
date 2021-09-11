// https://pepcoding.com/resources/online-java-foundation/time-and-space-complexity/quick-select-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{

	int pivot = a[r];
	cout << "pivot -> " << pivot << endl;
	int j = l;

	for(int i = l; i <= r; i++)
	{
		if(a[i] <= pivot){
			cout << "Swapping " << a[i] << " and " << a[j] << endl;
			swap(a[i], a[j]);
			j++;
		}
	}

	cout << "pivot index -> " << j-1 <<endl;
	return j-1;
}



int quickSelect(int a[], int l, int r, int k)
{
	if(l <= r){
		int pi = partition(a, l, r);

		// cout << pi << " " << k << endl;

		if(pi == k){
			return pi;
		}
		else if(pi < k){
			return quickSelect(a, pi+1, r, k);
		}
		else{
			return quickSelect(a, l, pi-1, k);
		}
	}


	return INT_MAX;
}


int main()
{
	int n;
	cin>>n;


	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int k;
	cin>>k;

	cout << a[quickSelect(a, 0, n-1, k-1)] << endl;
}