#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0, right = nums.size()-1;

        while(left <= right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid] == target) return mid;

            // if left half is sorted 
            if(nums[mid] >= nums[left]){
                if(nums[mid] >= target && nums[left] <= target){
                    right = mid-1;
                }
                else left = mid+1;
            }
            // if right half is sortd
            else{
                if(nums[mid] <= target && nums[right] >= target){
                    left = mid+1;
                }
                else right = mid-1;
            }
        } 

        return -1;   
    }
};


int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    Solution S;
    cout << S.search(nums, 1) << endl;
    cout << S.search(nums, -4) << endl;
}