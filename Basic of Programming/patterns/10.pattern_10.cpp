#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;


	int t1 = n/2+1, t2 = n/2+1;

	for(int i = 1; i <= n; i++){
		//cout << t1 << " " << t2 << endl;

		for(int j = 1; j <= n; j++)
		{
			if(j==t1 || j==t2){
				cout << "*\t";
			}
			else{
				cout<<"\t";
			}
		}

		cout << endl;


		if(i <= n/2){
			t1++;
			t2--;
		}
		else{
			t1--;
			t2++;
		}
	}
}