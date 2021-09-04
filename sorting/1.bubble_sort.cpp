// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/bubble-sorting-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

void comparing(int a, int b)
{
	cout << "Comparing " << b << " and " << a << endl; 
}

void swpping(int a, int b)
{
	cout << "Swapping " << b << " and " << a << endl;
}
void bubble_sort(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			comparing(a[j], a[j+1]);
			if(a[j] > a[j+1]){
				swpping(a[j], a[j+1]);
				swap(a[j], a[j+1]);
			}
		}
	}
}
int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}


	bubble_sort(a, n);

	for(int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}