// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-encodings-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

void printEncoding(string str, string asf)
{
	if(str.size() == 0){
		cout << asf << endl;
	}
	else{
		int x1 = (str[0])-'0';
		char ch = 'a'+x1-1;
		printEncoding(str.substr(1), asf+ch);
		if(str.size() >= 2){
			int x2 = stoi(str.substr(0,2));
			char ch2 = 'a'+x2-1;
			printEncoding(str.substr(2), asf+ch);
		}
	}
}

int main()
{
	string str;
	cin>>str;

	int dp[str.size()+1];
	memset(dp, 0, sizeof(dp));

	dp[0] = 1;
	
	int x = stoi(str.substr(0,2));

	
	if(x >= 10 && x <= 26){
		dp[1] = 2;
	}
	else if( str[1] == '0'){
		dp[1] = 0;
	}
	else{
		dp[1] = 1;
	}


	for(int i = 2; i < str.size(); i++)
	{
		int x1 = str[i]-'0';
		int x2 = stoi(str.substr(i-1, 2));

		if(x1 != 0){
			dp[i] = dp[i-1];
		}

		if(x2 >= 10 && x2 <= 26){
			dp[i] = dp[i] + dp[i-2];
		}

		
	}

	cout << dp[str.size()-1] << endl; 

	
	
}