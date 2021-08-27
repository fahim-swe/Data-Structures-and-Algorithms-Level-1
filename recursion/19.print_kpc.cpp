#include <bits/stdc++.h>
using namespace std;

string codes[] = {".,", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf)
{
	if(ques.size() == 0){
		cout << asf << endl;
	}
	else{
		string s = codes[ques[0]-'0'];
		for(int i = 0; i < s.size(); i++){
			printKPC(ques.substr(1), asf+s[i]);
		}
	}
}
int main()
{
	printKPC("78", "");
}