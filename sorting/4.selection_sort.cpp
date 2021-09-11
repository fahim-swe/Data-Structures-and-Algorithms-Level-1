// https://pepcoding.com/resources/online-java-foundation/time-and-space-complexity/selection-sort-official/ojquestion#!

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}


	// Selection sort

	for(int i = 0; i < n-1; i++){
		int min = i;

		// find min element form i+1 to n
		for(int j = i+1; j < n; j++)
		{
			cout << "Comparing " << a[j] << " and " << a[min] << endl;
			if(a[j] < a[min]){
				min = j;
			}
		}

		
		cout << "Swapping " << a[i] << " and " << a[min] << endl;
		swap(a[i], a[min]);
	
	}


	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}


	cout << endl;
}

