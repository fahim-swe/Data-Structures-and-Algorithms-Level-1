#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     bool check(vector<int> &piles, int h, int k)
    {
        long long totallHors = 0;
        for(int i = 0; i < piles.size(); i++)
        {
            if(piles[i] % k == 0) totallHors += piles[i]/k;
            else totallHors += piles[i]/k + 1;
        }

        
        if(totallHors <= h) return true;
        
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = 1000000000;

        while(lo <= hi)
        {
            
            int mid = lo + (hi-lo)/2;
            if(check(piles, h, mid)){
               
                hi = mid-1;
            }
            else lo = mid+1;


        }
        return lo;
    }
};

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    
    Solution S;
    cout << S.minEatingSpeed(piles, 8) << endl;
}