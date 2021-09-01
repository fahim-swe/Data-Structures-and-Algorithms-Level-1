// https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/print-all-palindromic-substrings-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
	int l = 0, r = str.size()-1;

	while(l <= r)
	{
		if(str[l++] != str[r--]){
			return false;
		}
	}

	return true;
}
int main()
{
	string str;
	cin>>str;

	for(int i = 0; i < str.size(); i++)
	{
		for(int j = 1; j <= str.size()-i; j++)
		{
			if(isPalindrome(str.substr(i,j))){
				cout << str.substr(i,j) << endl;
			}
		}
	}
}