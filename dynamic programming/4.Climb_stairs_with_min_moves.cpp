#include <bits/stdc++.h>
using namespace std;

int ClimbStairsWithMinJumps(int *arr, int n, int idx)
{
	if(idx == n) return 0;

	int climb = n;

	for(int i = 1; i <= arr[idx]; i++)
	{
		if((idx+i) <= n)
			climb = min (climb, ClimbStairsWithMinJumps(arr, n, idx+i));
	}  

	return climb+1;
}

int main()
{
	int n;
	cin>>n;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout << ClimbStairsWithMinJumps(arr, n, 0) << endl;

}