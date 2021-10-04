// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/sort-01-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

void sort01(int a[], int n)
{
	int j = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == 0){
			cout << "Swapping index " << i << " and index " << j << endl;
			swap(a[i], a[j]);
			j++;
		}
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

	sort01(a, n);

	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}