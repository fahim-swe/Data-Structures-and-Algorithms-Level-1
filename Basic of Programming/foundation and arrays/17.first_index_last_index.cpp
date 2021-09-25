// https://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/first-index-last-index-official/ojquestionhttps://www.pepcoding.com/resources/online-java-foundation/function-and-arrays/first-index-last-index-official/ojquestion

#include <bits/stdc++.h>
using namespace std;

int FastIdx(int a[], int n, int key)
{
	int lo = 0, hi = n-1;
	
	int pos = -1;
	while(lo <= hi){
		int mid = (lo+hi)/2;
		if(a[mid] == key){
			pos = mid;
			hi = mid-1;
		}
		else if(a[mid] > key){
			hi = mid-1;
		}
		else{
			lo = mid+1;
		}
	}

	return pos;
}

int LastIdx(int a[], int n, int key)
{
	int lo = 0, hi = n-1;

	int pos = -1;
	while(lo <= hi){
		int mid = (lo+hi)/2;
		if(a[mid] == key){
			pos = mid;
			lo = mid+1;
		}
		else if(a[mid] > key){
			hi = mid-1;
		}
		else{
			lo = mid+1;
		}
	} 

	return pos;
	
}
int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int n1;
	cin>>n1;

	cout << FastIdx(a, n, n1) << "\n" << LastIdx(a, n, n1);
}