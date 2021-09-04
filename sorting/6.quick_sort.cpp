// https://pepcoding.com/resources/online-java-foundation/time-and-space-complexity/quick-sort-official/ojquestion#!

#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r, int pivot)
{
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


	cout << "pivot index-> " << j-1 << endl;

	return j-1;
}

void quickSort(int a[], int l, int r, int pivot)
{
	if(l <= r){
		int idx = partition(a, l, r, pivot);

		quickSort(a, l, idx-1, a[idx-1]);
		quickSort(a, idx+1, r, a[r]);
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

	quickSort(a, 0, n-1, a[n-1]);

	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}