#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int nextNum(int n)
    {
        int totalSum = 0;
        while(n != 0)
        {
            int d = n%10;
            n = n/10;
            totalSum += d*d;
        }

        return totalSum;
    }

    // bool isHappy(int n) {
      


    //     set<int> st;

    //     while(n != 1 && st.find(n) == st.end())
    //     {
            
    //         st.insert(n);
    //         n = this->nextNum(n);
    //     }

       
    //     return n == 1;
    // }

    bool isHappy(int n)
    {
        int showRunner = n;
        int fastRunner = this->nextNum(n);

        while(fastRunner != 1 && showRunner != fastRunner)
        {
            showRunner = this->nextNum(showRunner);
            fastRunner = this->nextNum(this->nextNum(fastRunner));
        }

        return fastRunner == 1;
    }
};



int main()
{
    int n;
    cin>>n;

    Solution S;
    cout << S.isHappy(n) << endl;
}