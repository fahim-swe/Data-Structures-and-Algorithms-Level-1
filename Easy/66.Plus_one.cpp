#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // bool f = true;

        // vector<int> ans;
        // int i = digits.size()-1;
        
        // for(; i >= 0; i--)
        // {
        //     int value = digits[i] + 1;
        //     if(value == 10) {
        //         ans.push_back(0);
        //         continue;
        //     }

        //     ans.push_back(value);
        //     f = false;
        //     break;
        //     ans.push_back(digits[i]);
        // }

        // if(f) ans.push_back(1);

        // i--;
        // for(; i >= 0; i--){
        //     ans.push_back(digits[i]);
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;

        for(int i = digits.size()-1; i >= 0; i--)
        {   
            int value = digits[i]+1;
            if(value == 10) {
                digits[i] = 0;
                continue;
            }

            digits[i]++;
            break;
        }

        if(digits[0] == 0){
            digits.push_back(1);
            reverse(digits.begin(), digits.end());
        }

        return digits;
    }
};

int main()
{
    int n;
    cin>>n;

    vector<int> digits;
    for(int i = 0; i < n; i++){
        int x; cin>>x;
        digits.push_back(x);
    }

    Solution S;
    auto ans = S.plusOne(digits);
    for(auto x: ans){
        cout << x <<" ";
    }

}