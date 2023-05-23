#include <bits/stdc++.h>
using namespace std;


class Solution 
{
    public: 

        bool isMatch(int s1Count[26], int s2Count[26]){
            for(int i = 0; i < 26; i++){
                if(s1Count[i] != s2Count[i]) return false;
            }

            return true;
        }


        bool checkInclusion(string s1, string s2)
        {
            if(s1.size() > s2.size()) return false;

            int s1Count[26] = {0};
            int s2Count[26] = {0};

            for(int i = 0; i < s1.size(); i++){
                s1Count[s1[i]-'a']++;
                s2Count[s2[i]-'a']++;
            }

            for(int i = 0; i < s2.size()-s1.size(); i++){
                // checking 
                
                if(isMatch(s1Count, s2Count)) return true;

                // updating 
                s2Count[s2[i]-'a']--;
                s2Count[s2[i+s1.size()]-'a']++;
            }

        
            return isMatch(s1Count, s2Count);
        }
};

int main()
{
    char s[] = "Mango\0Hi";

    cout << sizeof(s) << endl;

    printf("%d %d", strlen(s), sizeof(s));
    Solution S;
    cout << S.checkInclusion("adc", "dcda");

    int p = ~1;
    cout << p << endl;
}