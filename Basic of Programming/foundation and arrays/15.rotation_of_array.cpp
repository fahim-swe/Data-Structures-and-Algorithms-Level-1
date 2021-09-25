// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/rotate-an-array-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i< n;i++){
		cin>>a[i];
	}

	int k;
	cin>>k;

	k = k%n;
	if(k < 0){
		k = k+n;
	}

	int b[n];
	for(int i = 0; i < n; i++){
		b[(i+k)%n] = a[i];
	}

	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	cout << endl;
}