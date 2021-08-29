#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int space = n/2, star = 1;

	for(int i = 1; i <= n; i++)
	{
		// print space 
		for(int j = 1; j <= space; j++){
			cout << "\t";
		}

		// print space
		for(int j = 1; j <= star; j++){
			cout << "*\t";
		}

		// print space
		for(int j = 1; j <= space; j++){
			cout << "\t";
		}

		cout << endl;
		if(i <= n/2){
			space--;
			star += 2;
		}
		else{
			space++;
			star -= 2;
		}
	}
}