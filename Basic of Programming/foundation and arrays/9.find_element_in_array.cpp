// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/find-element-in-array-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	int d;
	cin>>d;

	int idx = -1;

	for(int i = 0;i < n; i++)
	{
		if(a[i]==d){
			idx = i;
			break;
		}
	}

	cout << idx << endl;
}