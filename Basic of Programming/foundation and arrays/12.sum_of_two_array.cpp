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

	
	
	vector<int> v;

	int crray = 0;
	int i = n1-1, j = n2-1;

	while(i >= 0 && j >= 0)
	{
		int sum = crray+a[i]+b[j];
		//cout << sum%10 << endl;
		v.push_back(sum%10);
		crray = sum/10;
		i--, j--;
	}

	//cout << i << " " << j << endl;
	while(i >= 0)
	{
		int sum = crray+a[i];
		v.push_back(sum%10);
		crray = sum/10;
		i--;
	}

	while(j >= 0)
	{
		int sum = crray+b[j];
		v.push_back(sum%10);
		crray = sum/10;
		j--;
	}

	reverse(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	cout << endl;

}