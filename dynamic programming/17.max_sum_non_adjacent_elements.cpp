// // https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy


// #include <bits/stdc++.h>
// using namespace std;


// void printAdjSubset(int idx, int n, int a[], int sub[], bool f)
// {
// 	if(idx ==  n){
// 		for(int i = 0; i < n; i++){
// 			cout << sub[i] << " ";
// 		}
// 		cout << endl;
// 	}
// 	else{
// 		if(f){
// 			sub[idx] = -1;
// 			printAdjSubset(idx+1, n, a, sub, false);
// 		}
// 		else{
// 			sub[idx] = a[idx];
// 			printAdjSubset(idx+1, n, a, sub, true);
// 			sub[idx] = -1;
// 			printAdjSubset(idx+1, n, a, sub, false);
// 		}
// 	}
// }


// // int main()
// // {
// // 	int n;
// // 	cin>>n;

// // 	int a[n];
// // 	for(int i= 0; i < n; i++){
// // 		cin>>a[i];
// // 	}

// // 	// int sub[n];
// // 	// // printAdjSubset(0, n, a, sub, false);
// // 	// // // brote froces solution

// // 	int dp[n][2];

// // 	dp[0][0] = a[0];
// // 	dp[0][1] = 0;

// // 	for(int i = 1; i < n; i++){
// // 		dp[i][0] = dp[i-1][1]+a[i];
// // 		dp[i][1] = max(dp[i-1][0], dp[i-1][1]);
// // 	}

// // 	cout << max(dp[n-1][0], dp[n-1][1]) << endl;

// // }




// void printMaxAdjSubSet(int idx, int n, int arr[], int sub[], bool f)
// {
// 	if(idx == n){
// 		for(int i = 0; i < n; i++){
// 			cout << sub[i] << " ";
// 		}
// 		cout << endl;
// 		return ;
// 	}

// 	if(f){
// 		sub[idx] = -1;
// 		printMaxAdjSubSet(idx+1, n, arr, sub, false);
// 	}
// 	else{
// 		sub[idx] = arr[idx];
// 		printMaxAdjSubSet(idx+1, n, arr, sub, true);
// 		sub[idx] = -1;
// 		printMaxAdjSubSet(idx+1, n, arr, sub, false);
// 	}
// }

// int main()
// {
// 	int n;
// 	cin>>n;

// 	int arr[n];
// 	for(int i = 0; i <n; i++){
// 		cin>>arr[i];
// 	}

// 	int sub[n];
// 	printAdjSubset(0, n, arr, sub, false);
	
// }



#include <bits/stdc++.h>
using namespace std;

void subsequenceWithNoAdjElement(int idx, int n, int arr[], int subset[], bool f)
{
	if(idx == n){
		for(int i = 0; i < n; i++){
			cout <<subset[i] << " ";
		}
		cout << endl;
		return;
	}

	if(f)
	{
		subset[idx] = -1;
		subsequenceWithNoAdjElement(idx+1, n, arr, subset, false);
	}
	else{
		subset[idx] = arr[idx];
		subsequenceWithNoAdjElement(idx+1, n, arr,subset, true);
		subset[idx] = -1;
		subsequenceWithNoAdjElement(idx+1, n, arr,subset,  false);
	}
}
int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	// int sub[n];
	// subsequenceWithNoAdjElement(0, n, arr, sub, false);



	// Maximum sum with not Adj Element

	int dp[n+1][2];
	// dp[i][0] ,  arr[i] must include 
	// dp[i][1] ,  arr[i] must not include

	dp[0][0] = arr[0];
	dp[0][1] = 0;
	for(int i = 1; i < n; i++)
	{
		dp[i][0] = dp[i-1][1] + arr[i];
		dp[i][1] = max( dp[i-1][0], dp[i-1][1] );
	}

	cout << max(dp[n-1][0], dp[n-1][1]) << endl;
}