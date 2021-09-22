// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-variable-jumps-official/ojquestion#!


#include <bits/stdc++.h>
using namespace std;

int arr[21];
int dp[21];
int N;

int jumps(int n)
{

	if(n == N){
		return 1; 
	}

	if(n > N){
		return 0;
	}

	if(dp[n] != -1){
		return dp[n];
	}
	int p = 0;
	
	for(int i = 1; i <= arr[n]; i++){
	   p += jumps(n+i);
	}

	return dp[n] = p;
}
int main()
{
	memset(dp, -1, sizeof(dp));

	
	cin>>N;

	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}


	cout << jumps(0) << endl;

}