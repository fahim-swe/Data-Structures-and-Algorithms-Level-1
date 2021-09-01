#include <bits/stdc++.h>
using namespace std;

string compresion2(string str)
{
	string ans = "";
	int i = 0;
	int j = 0;

	while(i < str.size())
	{
		ans += str[i];

		j = i+1;
		int con = 1;
		while(str[j] == str[i])
		{
			j++;
			con++;
		}

		i = j;
		if(con > 1){
			ans += to_string(con);
		}
	}

	//cout << ans << endl;

	return ans;
}
string compresion1(string str)
{
	string ans = "";

	int i = 0;
	while(i < str.size())
	{

		int j = i;
		ans += str[i];
		while(str[j] == str[i]){
			j++;
		}

		i = j;
	}

	return ans;
}
int main()
{
	string str;
	cin>> str;

	cout << compresion1(str) << endl;
	cout << compresion2(str) << endl;

}