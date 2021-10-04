// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/sort-012-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
	int i = 0, j = 0, k = n-1;

	while(i <= k)
	{
		if(a[i] == 0){
			cout << "Swapping index " << i << " and index " << j << endl;
			swap(a[i++], a[j++]);
		}
		else if(a[i] == 1){
			i++;
		}
		else if(a[i] == 2){
			cout << "Swapping index " << i << " and index " << k << endl;
			swap(a[i], a[k]);
			k--;
		}
	}
}
int main()
{
	int n;
	cin>>n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin>> a[i];
	}

	sort012(a, n);

	for(int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}