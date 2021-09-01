// https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/print-all-permutations-of-a-string-iteratively-official/ojquestion


#include <bits/stdc++.h>
using namespace std;


int fac(int n)
{
	int ans = 1;

	for(int i = 1; i <= n; i++)
	{
		ans *= i;
	}

	return ans;
}
void printAllPermutation(string str)
{
	int limit = fac(str.size());

	string t = str;
	for(int i = 0; i < limit; i++)
	{

		str = t;
		while(str.size() != 0)
		{
			cout << str[i % str.size()];
			str.erase(i%str.size(), 1);
		}

		cout << endl;
	}
}
int main()
{
	string str;
	cin>>str;


	printAllPermutation(str);
}