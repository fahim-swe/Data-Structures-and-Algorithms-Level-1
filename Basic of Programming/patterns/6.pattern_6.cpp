#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int star = n/2+1, space = 1;

	for(int i = 1; i <= n; i++){

		// print star
		for(int j= 1; j <= star; j++){
			cout << "*\t";
		}

		// print space
		for(int j = 1; j <= space; j++){
			cout << "\t";
		}

		// print star
		for(int j = 1; j <= star; j++){
			cout << "*\t";
		}

		cout <<endl;



		if(i <= n/2){
			space += 2;
			star--;
		}
		else{
			space -= 2;
			star++;
		}
		
	}
}