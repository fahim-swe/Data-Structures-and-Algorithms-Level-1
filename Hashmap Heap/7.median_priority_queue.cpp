// https://www.pepcoding.com/resources/online-java-foundation/hashmap-and-heap/median-priority-queue-official/ojquestion


#include <bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<int> l_max; // store min half max priority queue
	priority_queue<int, vector<int>, greater<int>> r_min; // store max half min priority queue

	string str;
	
	while(cin>>str){
		if(str == "quit"){
			break;
		}
		else if(str == "add"){
			int val;
			cin>>val;

			if(r_min.size() > 0 && val > r_min.top()){
				r_min.push(val);
			}
			else{
				l_max.push(val);
			}


			if((r_min.size()-l_max.size()) == 2){
				l_max.push(r_min.top());
				r_min.pop();
			}
			else if((l_max.size()-r_min.size()) == 2){
				r_min.push(l_max.top());
				l_max.pop();
			}
		}
		else if(str == "peek"){
			if((l_max.size()+r_min.size()) == 0){
				cout << "Underflow" << endl;
			}
			else if(l_max.size() >= r_min.size()){
				cout << l_max.top() <<endl;
			}
			else{
				cout << r_min.top() << endl;
			}
		}
		else if(str == "remove"){
			if((l_max.size()+r_min.size()) == 0){
				cout << "Underflow" << endl;
			}
			else if(l_max.size() >= r_min.size()){
				cout << l_max.top() <<endl;
				l_max.pop();
			}
			else{
				cout << r_min.top() << endl;
				r_min.top();
			}
		}
	}

}