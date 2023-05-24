#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> ans;

        int n = temperatures.size();
        
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top().first <= temperatures[i]){
                st.pop();
            }

            if(st.empty()) ans.push_back(0);
            else {
                ans.push_back(st.top().second - i);
            }

            st.push({temperatures[i], i});
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};


int main()
{
    vector<int> input = {73, 74, 75, 71, 69, 72, 76, 73};

    Solution S;
    auto ans = S.dailyTemperatures(input);

    for(auto x: ans){
        cout << x << " ";
    }
    cout << endl;

    vector<int> input2 = {82, 62, 70, 58, 47, 47, 46, 76, 100, 70};
    ans = S.dailyTemperatures(input2);

    for(auto x: ans){
        cout << x << " ";
    }
}