// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/reverse-an-array-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	int i = 0, j = n-1;
	while(i < j)
	{
		swap(a[i++], a[j--]);
	}

	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}



// tell me contratutation
// exm ses, hoilo...(Totall 18 subjects,, 3 month dore exm, finally ajke ses)
// so for tell me contratutation..
// completed half software engineering


