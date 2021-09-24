// https://www.pepcoding.com/resources/online-java-foundation/patterns/design-pattern-19-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;



	// step- 1
	for(int i = 0; i <= n/2; i++){
		cout << "*	";
	}
	for(int i =  0; i <= n/2-2; i++){
		cout << "	";
	}
	cout << "*	";

	cout << endl;

	// step-2
	int t = n/2;
	for(int i = 0; i <= n/2-2; i++){
		for(int j = 0; j < n; j++){
			if(j==t || j == (n-1)){
				cout << "*	";
			}
			else{
				cout << "	";
			}
		}
		cout << endl;
	}


	// step-3
	for(int i = 0; i < n; i++){
		cout <<"*	";
	}
	cout <<endl;

	// step-4
	for(int i = 0; i <= n/2-2; i++){
		for(int j = 0; j < n; j++){
			if(j==0 || j == t){
				cout << "*	";
			}
			else{
				cout << "	";
			}
		}
		cout << endl;
	}



	// step-4
	cout << "*	";
	for(int i =  0; i <= n/2-2; i++){
		cout << "	";
	}
	for(int i = 0; i <= n/2; i++){
		cout << "*	";
	}


}