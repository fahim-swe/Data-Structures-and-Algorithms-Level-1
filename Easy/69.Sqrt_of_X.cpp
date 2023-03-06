#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int lo = 0, hi = x;

        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            if( (mid*mid) > x){
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }    

        cout << lo << " " << hi << endl;

        return hi;
    }
};


int main()
{
    while(true){
        int x;
    cin>>x;

    Solution s;
    cout << s.mySqrt(x) << endl;
    }
    int x;
    cin>>x;

    Solution s;
    cout << s.mySqrt(x) << endl;
}