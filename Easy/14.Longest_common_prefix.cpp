#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";

        for(int idx = 0; idx < strs[0].size(); idx++)
        {
            bool f = true;
            for(int i = 0; i < strs.size(); i++)
            {
                if(strs[i].size() > idx && strs[0][idx] == strs[i][idx]) continue;
                
                f = false;
                break;
            }

            if(f){
                ans.push_back(strs[0][idx]);
                continue;
            }
            break;
        }

        return ans;
    }
};

int main()
{
    int n;
    cin>>n;

    vector<string> strs;
    for(int i = 0; i < n; i++){
        string str;cin>>str;
        strs.push_back(str);
    }


    Solution s;
    cout << s.longestCommonPrefix(strs) << endl;
}