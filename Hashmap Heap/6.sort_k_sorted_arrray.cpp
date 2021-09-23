// https://www.pepcoding.com/resources/online-java-foundation/hashmap-and-heap/sort-ksorted-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int k;
	cin>>k;

	priority_queue<int, vector<int>, greater<int>> pq;

	for(int i = 0; i < n; i++){
		if(i <= k){
			pq.push(a[i]);
		}
		else{
			cout << pq.top() << endl;
			pq.push(a[i]);
			pq.pop();
		}
	}

	while(!pq.empty()){
		cout << pq.top() << endl;
		pq.pop();
	}
}