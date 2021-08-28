#include <bits/stdc++.h>
using namespace std;


void printEncoding(string str, string asf)
{
	if(str.size() == 0){
		cout<< asf << endl;
		return;
	}

	if(str[0] == '0'){
		return;
	}

	int x = str[0]-'0';
	char ch = 'a' + str[0]-'0' - 1;

	printEncoding(str.substr(1), asf + ch);

	if(str.size() >= 2){
		int x = stoi(str.substr(0,2));
		if(x <= 26){
			char ch = 'a'+x-1;
			printEncoding(str.substr(2), asf+ch);
		}
		
	}
}
int main()
{
	int t;
	cin>>t;

	while(t--){
		string str;
		cin>>str;

		printEncoding(str, "");	
	}
	
}