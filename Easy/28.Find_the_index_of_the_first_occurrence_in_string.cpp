#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int checked(string str, string subStr, int idx)
    {
        int n = str.size();
        int m = subStr.size();

        int count = 0;
        int idxOfSubstr = 0;
        while( idxOfSubstr < m && idx < n)
        {
            if(str[idx++] != subStr[idxOfSubstr++]) break;

            count++;
        }

        if(m == count) return idx-count;
        return -1;
    }

    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        int m = needle.size();

        for(int i = 0; i < n-m+1; i++)
        {
            int idx = checked(haystack, needle, i);
            if(idx != -1) return idx;
        }

        return -1;
    }
};

int main()
{
    string str, subStr;
    cin>>str >> subStr;

    Solution S;
    cout << S.strStr(str, subStr) << endl;
}