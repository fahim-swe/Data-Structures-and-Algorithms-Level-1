#include <bits/stdc++.h>
using namespace std;

int matrix[110][110];
int dp[110][110];

int goldMine(int sr, int sc, int dr, int dc)
{
    
    if(sr < 0 || sr > dr || sc > dc) return 100;
    cout << sr << " " << sc << " " << dr << " " << dc << endl;
    if(sr == dr && sc == dc) return matrix[sr][sc];

    // call
    int right_up = goldMine(sr-1, sc+1, dr, dc);
    int right_forword = goldMine(sr, sc+1, dr, dc);
    int right_down = goldMine(sr+1, sr+1, dr, dc);

    return max(right_forword, max(right_up, right_down));
}

int main()
{   
    int n, m;
    cin>>n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>matrix[i][j];
        }
    }
    int ans = INT_MAX;
    
    cout << goldMine(0, 0, 0, m-1) << endl;
    cout << goldMine(0, 0, 1, m-1) << endl;
}