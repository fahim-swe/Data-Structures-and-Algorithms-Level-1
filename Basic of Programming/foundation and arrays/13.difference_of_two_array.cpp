// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/difference-of-two-arrays-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

void input(int a[], int n)
{
	for(int i= 0; i < n; i++){
		cin>>a[i];
	}
}


int main()
{
	int n1, n2;
	cin>>n1;

	int a[n1];
	input(a, n1);

	cin>>n2;
	int b[n2];
	input(b, n2);

	vector<int> v;
	int i = n1-1, j = n2-1;

	int carry = 0;

	while(i >= 0 && j >= 0)
	{
		int dif = carry + b[j]-a[i];
		if(dif < 0){
			dif += 10;
			v.push_back(dif);
			carry = 1;
		} 
		else{
			v.push_back(dif);
			carry = 0;
		}

		i--, j--;
	}


	while( i >= 0){
		int dif = 
	}
}