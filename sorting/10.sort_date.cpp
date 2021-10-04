// https://www.pepcoding.com/resources/online-java-foundation/time-and-space-complexity/sort-dates-official/ojquestion

#include <bits/stdc++.h>
using namespace std;


void countSort(string str[], int n, int x1, int x2, int range)
{
	
	string ans[n];

	int fre[range];
	memset(fre, 0, sizeof(fre));


	for(int i = 0; i < n; i++)
	{
		int idx = stoi(str[i].substr(x1, x2));
		fre[idx]++;
	}

	for(int i = 1; i < range; i++){
		fre[i] = fre[i]+fre[i-1];
	}


	// update main array
	for(int i = n-1; i >= 0; i--)
	{
		int pos = fre[stoi(str[i].substr(x1,x2))];
		ans[pos-1] = str[i];
		fre[stoi(str[i].substr(x1,x2))]--;
	}
	

	for(int i = 0; i < n; i++){
		str[i] = ans[i];
	}

}
void sort_date(string str[], int n)
{
	countSort(str, n, 0, 2, 32); // sort date
	countSort(str, n, 2, 2, 13); // sort month
	countSort(str, n, 4, 4, 2510); // sort year

	for(int i = 0; i < n; i++){
		cout << str[i] <<endl;
	}
}
int main()
{
	int n;

	cin>>n;

	string str[n];
	
	for(int i= 0; i < n; i++){
		string s;
		cin>>s;
		str[i] = s;
	}

	sort_date(str, n);
}