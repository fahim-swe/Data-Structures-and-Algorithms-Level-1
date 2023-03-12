#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) ans ^= nums[i];

        return ans;      
    }
};


int main()
{
    int n, x; 
    cin>> n;

    vector<int> v(n, 0);
    for(int i = 0; i < n; i++){
        cin>>x; 
        v.push_back(x);
    }

    Solution S;
    cout << S.singleNumber(v) << endl;
}