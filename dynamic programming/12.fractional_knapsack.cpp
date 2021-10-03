// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/fractional-knapsack-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2)
{
	double d1 = p1.first/p1.second;
	double d2 = p2.first/p2.second;

	return d1 > d2;
}
int main()
{
	int n;
	cin>>n;

	int val[n], wt[n];
	vector<pair<int,int>> v;

	for(int i = 0; i < n; i++){
		cin>>val[i];
	}
	for(int i = 0; i < n; i++){
		cin>>wt[i];
	}

	int cap;
	cin>>cap;

	double ans = 0;

	for(int i = 0; i < n; i++){
		v.push_back({val[i], wt[i]});
	}

	sort(v.begin(), v.end(), compare);

	for(int i = 0; i < v.size(); i++){
		cout << v[i].first/v[i].second << " " << v[i].first << " " << v[i].second <<endl;
	}

	for(int i = 0; i < v.size(); i++){
		if(cap >= v[i].second){
			ans += v[i].first;
			cap = cap - v[i].second;
			continue;
		}

		double vw = v[i].first/v[i].second;
		ans += vw*cap;
		cap = 0;
		break;
	}

	cout << fixed << setprecision(1) << ans << endl;
}