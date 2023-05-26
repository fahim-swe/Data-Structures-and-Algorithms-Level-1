#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> positionWithSpeed;
        stack<double> st;
        int n = position.size();

        for(int i = 0; i < position.size(); i++){
            positionWithSpeed.push_back({position[i], speed[i]});
        }    

        sort(positionWithSpeed.begin(), positionWithSpeed.end());

        st.push((double)(target-positionWithSpeed[n-1].first)/positionWithSpeed[n-1].second);

        for(int i = n-2; i < positionWithSpeed.size(); i--)
        {
            double t = (double)(target-positionWithSpeed[i].first)/positionWithSpeed[i].second;
            
            if(st.top() < t){
                
                st.push(t);
            }
        }

        return st.size();
    }
};


int main()
{

    vector<int> position = {10, 8, 0, 5, 3};
    vector<int> speed = {2, 4, 1, 1, 3};

    int target = 12;

    Solution S;
   // cout << S.carFleet(target, position, speed); 

    vector<int> position2 = {6, 8};
    vector<int> speed2 = {3, 2};
    cout << S.carFleet(10, position2, speed2) << endl;
}