// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/merge-two-sorted-arrays-official/ojquestion
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// vector<int> v1 = {1, 2, 5, 9};
	// vector<int> v2 = {2, 3, 5, 7, 10};

	// vector<int> ans;
	// merge(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(ans));
	// for(int i = 0; i < ans.size(); i++)
	// {
	// 	cout << ans[i]<< " ";
	// }

	

	// Input
	int n1, n2;
	cin>>n1;

	int a[n1];
	for(int i = 0; i < n1; i++){
		cin>>a[i];
	}

	cin>>n2;
	int b[n2];
	for(int i = 0; i < n2; i++)
	{
		cin>>b[i];
	}

	int ans[n1+n2];

	int i = 0, j = 0, l = 0;

	while(i < n1 && j < n2)
	{
		if(a[i] < b[j]){
			ans[l++] = a[i++];
		}
		else{
			ans[l++] = b[j++];
		}
	}


	while(i < n1){
		ans[l++] = a[i++];
	}

	while(j < n2)
	{
		ans[l++] = b[j++];
	}


	for(int i = 0; i < (n1+n2);  i++)
	{
		cout << ans[i] << endl;
	}

}