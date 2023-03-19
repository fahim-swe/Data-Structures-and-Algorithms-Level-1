#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        string resDigit;
        int cnt = 0;
        while( n != 0)
        {
            resDigit += n%2 == 1 ? '1' : '0';
            n /= 10;
            cnt++;
        }

        for(int i = 0; i < 32-cnt; i++)
        {
            resDigit += '0';
        }

        uint32_t ans = 0;
        int d = 0;

        for(int i = 31; i >= 0; i--)
        {
            if(resDigit[i] == '1') ans += pow(2, d);
            d++;
        }
        
        return ans;
    }
};

int main()
{
    uint32_t n;
    cin>>n;

   Solution S;
   cout << S.reverseBits(n) << endl;
}