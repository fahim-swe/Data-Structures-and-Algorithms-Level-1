// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/target-sum-pair-1-official/ojquestion

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

	int sum;
	cin>>sum;

	sort(a, a+n);

	for(int i = 0; i < n; i++){
		if(binary_search(a+i+1, a+n, sum-a[i])){
			cout << a[i] << ", " << sum-a[i] << endl;
		}
	}

}