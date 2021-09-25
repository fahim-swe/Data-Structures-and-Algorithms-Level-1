// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/subarray-problem-official/ojquestion


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

	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			for(int l = i; l <= j;  l++){
				cout << a[l] << "\t";
			} 
			cout << endl;
		}
	}

	
}