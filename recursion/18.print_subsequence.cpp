#include <bits/stdc++.h>
using namespace std;


void printSS(string ques, string ans)
{
	if(ques.size() == 0){
		cout << ans << endl;
		return;
	}

	char ch = ques[0];
	printSS(ques.substr(1), ans+ch);
	printSS(ques.substr(1), ans);

}
int main()
{
	string str;
	cin>> str;

	printSS(str, "");
}