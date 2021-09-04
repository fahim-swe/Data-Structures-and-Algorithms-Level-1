// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/merge-sort-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{

	//cout << l << " " << mid << " " << r << endl;
	cout << "Merging these two arrays" << endl;

	cout << "left array -> ";
	for(int i = l; i <= mid; i++)
	{
		cout << a[i]<< " ";
	}
	cout << endl;

	cout << "right array -> ";
	for(int i = mid+1; i <= r; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;



	int temp[r-l+1];

	int i = l, j = mid+1, k = 0;

	while( i <= mid && j <= r)
	{
		if(a[i] < a[j]){
			temp[k++] = a[i++];
		}
		else{
			temp[k++] = a[j++];
		}
	}

	while(i <= mid){
		temp[k++] = a[i++];
	}

	while(j <= r)
	{
		temp[k++] = a[j++];
	}

	//cout << l << " " << mid << " " << r << endl;

	//cout << l << " " << r << " " << mid << endl;

	//cout << sizeof(temp)/sizeof(temp[0]) << endl;

	//cout << k << " " << (r-l)+1 << endl;
	for(int i = 0; i < k; i++)
	{
		a[l++] = temp[i];
	}
}

void mergeSort(int a[], int l, int r)
{
	if(l < r)
	{
		int mid = (l+r)/2;
		
		mergeSort(a, l, mid);
		mergeSort(a, mid+1, r);
		//cout << l << " " << mid << " " << r << endl;
		merge(a, l, mid, r);
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

	mergeSort(a, 0, n-1);

	cout << "Sorted Array -> ";
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	} 
	cout << endl;
}