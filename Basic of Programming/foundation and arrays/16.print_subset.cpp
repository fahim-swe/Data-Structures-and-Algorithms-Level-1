// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/subsets-of-array-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

void printSubset(int idx, int n, int a[], int ans[]){

	if(idx == n){
		for(int i = 0; i < n; i++){
			if(ans[i]==-1){
				cout << "-\t";
			}else{
				cout << ans[i] << "\t";
			}
		}
		cout << endl;
	}
	else{
		ans[idx] = -1;
		printSubset(idx+1, n, a, ans);
		ans[idx] = a[idx];
		printSubset(idx+1, n, a, ans);
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

	int ans[n];
	printSubset(0, n, a, ans);

}