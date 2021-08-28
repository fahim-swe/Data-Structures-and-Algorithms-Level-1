#include <bits/stdc++.h>
using namespace std;


void printPermutations(string str, string asf)
{

	if(str.size() == 0){
		cout<< asf << endl;
		return;
	}
	for(int i = 0; i < str.size(); i++){
		
		string rem = str.substr(0, i) + str.substr(i+1);
		printPermutations(rem, asf+str[i]);
	}
}
int main(){

	string str = "abc";

	//cout << str.substr(0, 0+1) << " " << str.substr(0+1) << endl;
	printPermutations("abc", "");
}