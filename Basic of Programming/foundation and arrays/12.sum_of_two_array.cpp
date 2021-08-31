// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/sum-of-two-arrays-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n1;
	cin>>n1;

	int a[n1];
	for(int i = 0; i < n1; i++){
		cin>>a[i];
	}

	int n2;
	cin>>n2;

	int b[n2];
	for(int i = 0; i < n2; i++){
		cin>>b[i];
	}

	int i = n1-1, j = n2-1;

	vector<int> v;
	int carry = 0;

	while(i >= 0 && j >= 0)
	{
		int t = a[i--]+b[j--]+carry;
		v.push_back(t%10);
		carry = t/10;
	}

	while(i >= 0){
		int t = a[i--]+carry;
		v.push_back(t%10);
		carry = t/10;
	}

	while(j >= 0){
		int t = a[j--]+carry;
		v.push_back(t%10);
		carry = t/10;
	}

	if(carry != 0){
		v.push_back(carry);
	}

	reverse(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		cout << v[i]<< endl;
	}
}