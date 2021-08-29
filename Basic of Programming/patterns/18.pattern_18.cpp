#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	
	int space = n/2;
	int star = 1;

	for(int i = 1; i <= n/2; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i==1 || i==j || (i+j)==n+1)
			{
				cout << "*\t";
			}
			else{
				cout << "\t";
			}
		}
		cout << endl;
	}

	for(int i = 1; i <= n/2+1; i++)
	{
		for(int j = 1; j <= space; j++){
			cout << "\t";
		}

		for(int j = 1; j <= star; j++){
			cout << "*\t";
		}

		space--;
		star += 2;
		cout<<endl;
	}


}