#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public: 
    vector<int> productExceptSelf(vector<int> &nums)
    {
        
    }


    vector<int> effecientSolution(vector<int> &nums)
    {
        vector<int> output;

        int product = 1;
        // constract left subarray 
        for(int i = 0; i < nums.size(); i++){
            product = product * nums[i];
            output.push_back(product);
        }


        product = 1;
        for(int i = nums.size()-1; i > 0; i--){
            output[i] = output[i-1]*product;
            product = product * nums[i];
        }

        output[0] = product;
         
        return output;
    }
};

int main()
{
    vector<int> inputArray = {-1, 1, 0, -3, 3};
    Solution S;
    vector<int> ans = S.effecientSolution(inputArray);
    for(auto x: ans){
        cout << x << " ";
    }
    cout <<endl;
}