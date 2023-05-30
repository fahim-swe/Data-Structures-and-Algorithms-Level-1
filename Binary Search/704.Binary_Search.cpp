#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1;

        while(lo <= hi)
        {
            int mid = (lo+hi)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }    

        return -1;
    }
};


int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    Solution S;
    cout << S.search(nums, 9) << endl;
}