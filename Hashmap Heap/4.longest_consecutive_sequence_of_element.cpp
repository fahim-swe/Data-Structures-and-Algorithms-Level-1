// https://www.pepcoding.com/resources/online-java-foundation/hashmap-and-heap/lcqs-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>> n;
	
	set<int> s1, s2;
	int a[n];

	for(int i = 0; i < n; i++){
		int x;cin>>x;
		a[i] = x;
		s1.insert(x);
	}

	for(auto x: s1){
		auto it = s1.find(x-1);
		if(it == s1.end()){
			s2.insert(x);
		}
	}


	int st = 0, si = 0;

	for(auto val: a){
		auto it = s2.find(val);
		if(it != s2.end()){
			int tst = val;
			int ti = 1;

			while(s1.end() != s1.find(tst+ti)){
				ti++;
			}

			if(ti > si){
				si = ti;
				st = val;
			}
		}
	}

	for(int i = 0; i < si;i++){
		cout << st++ <<endl;
	}
}