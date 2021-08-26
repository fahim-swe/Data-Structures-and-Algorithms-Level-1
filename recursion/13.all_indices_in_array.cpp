#include <bits/stdc++.h>
using namespace std;


vector<int> all_idx(int a[], int ele, int idx, int n){
	if(idx == n){
		return {};
	}
	
	vector<int> ans = all_idx(a, ele, idx+1, n);
	if(a[idx] == ele){
		ans.push_back(idx);
	}
	
	return ans;
}

vector<int> all_idx2(int a[], int ele, int idx, int n)
{
	if(idx == -1){
		return {};
	}

	vector<int> ans = all_idx2(a, ele, idx-1, n);

	if(a[idx] == ele){
		ans.push_back(idx);
	}

	return ans;
}

int main()
{
	int a[] = {1, 2, 3, 8, 8, 5, 8, 8, 6};

	int n = sizeof(a)/sizeof(a[0]);

	vector<int> ans = all_idx(a, 8, 0, n);

	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	cout << endl;

	vector<int> ans2 = all_idx2(a, 8, n-1, n);

	for(int i = 0; i < ans2.size(); i++){
		cout << ans2[i] << " ";
	}
	
	cout << endl;
}