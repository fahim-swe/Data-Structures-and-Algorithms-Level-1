#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];

        for(int i = 0; i < 26; i++) arr[i] = -1;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(arr[s[i]-'a'] == -1) arr[s[i]-'a'] = i;
            else arr[s[i]-'a'] = -2;
        }


        int ans = INT_MAX;
        for(int i = 0; i< 26; i++){
            if(arr[i] != -1 && arr[i] != -2) ans = min(ans, arr[i]);
        }

        if(ans == INT_MAX) return -1;
        return ans;
    }


     int firstUniqCharBest(string s) {
        int freq[26];

        for(int i= 0; i< 26; i++) freq[i] = 0;

        for(int i = 0; i < s.size(); i++) freq[s[i]-'a']++;

        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i]-'a'] == 1) return i;
        } 


        return -1;
    }

    
};


int main()
{
    Solution S;
    string s;
    cin>>s;

    cout << S.firstUniqChar(s) << endl;
}