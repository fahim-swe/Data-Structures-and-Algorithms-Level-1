#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:

    stack<int> allSt, minSt;

    MinStack() {
        
    }
    
    void push(int val) {
        allSt.push(val);
        if(minSt.empty()) minSt.push(val);
        else if(minSt.top() >= val) minSt.push(val);    
    }
    
    void pop() {
        if(allSt.top() == minSt.top()) {
            allSt.pop();
            minSt.pop();
        }
        else{
            allSt.pop();
        }
    }
    
    int top() {
        return allSt.top();
    }
    
    int getMin() { 
        return minSt.top();
    }
};

int main()
{

}