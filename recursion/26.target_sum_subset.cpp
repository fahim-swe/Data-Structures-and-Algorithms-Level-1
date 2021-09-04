#include <bits/stdc++.h>
using namespace std;

void TargetSumSubset(int a[], int idx, int n, int sum, int tar, string ans)
{
	if(idx == n)
	{
		//cout << sum << " " << ans << endl;
		if(sum == tar){
			for(int i =0; i < ans.size(); i++)
			{
				cout << ans[i] << " ";
			}
			cout << endl;
		}
	}
	else{
		TargetSumSubset(a, idx+1, n, sum+a[idx], tar, ans+to_string(a[idx]));
		TargetSumSubset(a, idx+1, n, sum, tar, ans);
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

	int sum;
	cin>>sum;
	
	TargetSumSubset(a, 0, n, 0, sum, "");
}