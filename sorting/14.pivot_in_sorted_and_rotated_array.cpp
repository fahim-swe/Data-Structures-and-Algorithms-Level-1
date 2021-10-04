// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/pivot-sorted-rotated-array-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;


	int a[n];

	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int lo = 0, hi = n-1;

	while(lo < hi){
		int mid = (lo+hi)/2;
		if(a[mid] < a[hi]){
			hi = mid;
		}
		else{
			lo = mid+1;
		}
	}

	cout << a[hi] << endl;
}