// https://pepcoding.com/resources/online-java-foundation/time-and-space-complexity/partition-an-array-official/ojquestion#!

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



	int pivot;
	cin>>pivot;

	// O to j-1 smaller or equal number
	// j to i-1 greater
	// i+1 to n unknow area

	int i = 0, j = 0;

	for(int i = 0; i < n; i++)
	{
		if(a[i] <= pivot){
			cout << "Swapping " << a[i] << " and " << a[j] << endl;
			swap(a[i], a[j]);
			j++;
		}
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}

}