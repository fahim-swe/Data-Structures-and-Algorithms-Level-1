#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(mp.find(target-nums[i]) == mp.end()){
                mp[nums[i]] = i;
            }
            else {
                return { mp[target-nums[i]], i};
            }
        }

        return {-1, -1};
    }
};

int main()
{
    int n;
    cin>>n;

    vector<int> input;
    for(int i = 0; i < n; i++){
        int x; cin>>x;
        input.push_back(x);
    }

    int target;
    cin>>target;


    Solution s;
    vector<int> ans = s.twoSum(input, target);
    for(auto x: ans){
        cout << x << " ";
    }

    cout << endl;
}