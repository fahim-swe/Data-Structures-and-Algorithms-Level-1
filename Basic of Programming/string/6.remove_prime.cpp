#include <bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
	if(n==1) return false;
	if(n==2) return true;
	if(n%2 == 0) return false;


	for(int i = 3; i*i <= n; i += 2)
	{
		if(n%i == 0){
			return false;
		}
	}

	return true;


	return true;
}
int main()
{
	int n;
	cin>>n;

	vector<int> v;
	for(int i = 0; i < n; i++)
	{
		int x;cin>>x;

		if(!isPrime(x)){
			v.push_back(x);
		}
	}

	cout << "[";
	for(int i = 0; i < v.size()-1; i++)
	{
		cout << v[i] << ", ";
	}

	cout << v[v.size()-1];

	cout << "]";
}