#include <iostream>
#include <algorithm>
using namespace std;

int cs(int *arr, int n){
    // write your code here

	if(n==0) return 1;
	if(n < 0) return 0;

	int climb = 0;
	for(int i =1; i <= arr[n-1]; i++){
		climb += cs(arr, n-i);
	}

	return climb;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }

	reverse(arr, arr+n);
    cout<<cs(arr,n)<<endl;
}