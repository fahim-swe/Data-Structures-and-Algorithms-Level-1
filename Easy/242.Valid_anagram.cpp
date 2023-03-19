#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26, 0);

        for(auto x: s)
        {
            arr[x-'a']++;
        }    

        for(auto x: t) arr[x-'a']--;

        for(int i = 0; i < 26; i++)
        {
            if(arr[i] != 0) return false;
        }

        return true;
    }

    /// 
    bool isAnagramSorting(string s, string t)
    {
        if(s.size() != t.size()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int n = s.size();


        for(int i = 0; i< n; i++)
        {
            if(s[i] != t[i]) return false;
        }

        return true;
    }
};



int main()
{
    string s1, s2;
    cin>>s1 >> s2;

    Solution S;
    cout << S.isAnagram(s1, s2) << endl;
}