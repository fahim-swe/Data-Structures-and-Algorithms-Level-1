// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/arrange-buildings-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;


	long long int ob = 1, os = 1;

	for(int i = 2; i <= n; i++){
		long long int nb = os;
		long long int ns = ob+os;

		ob = nb;
		os = ns;
	}

	long long int total = ob+os;

	cout << total*total << endl;
}