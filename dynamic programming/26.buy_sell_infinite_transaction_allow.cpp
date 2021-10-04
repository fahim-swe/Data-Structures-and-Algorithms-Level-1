// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/buy-and-sell-stocks-ita-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];

	int profit = 0, b = 0, s = 0;

	for(int i = 0; i < n; i++){
		cin>>a[i];
	}


	for(int i = 1; i < n; i++)
	{
		if(a[i] >= a[i-1]){
			s++;
		}
		else{
			//cout << a[s] << " " << a[b] << endl;
			profit += a[s]-a[b];
			s = b = i;
		}
	}

	profit += a[s]-a[b];

	cout << profit << endl;
}