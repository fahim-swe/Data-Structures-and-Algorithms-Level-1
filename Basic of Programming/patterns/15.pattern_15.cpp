#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;

	int num = 1, space = n/2;

	for(int i = 1; i <= n; i++)
	{

		for(int i = 1; i <= space; i++){
			cout <<"\t";
		}


		for(int i = num/2+1; i <= num; i++){
			cout<<i << "\t";
		}

		int t = num-1;
		for(int i = 1; i <= num/2; i++){
			cout<<t--<<"\t";
		}


		cout << endl;


		if(i <= n/2){
			space--;
			num += 2;
		}
		else{
			space++;
			num -= 2;
		}
	}
}