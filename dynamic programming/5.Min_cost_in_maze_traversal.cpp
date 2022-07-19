#include <bits/stdc++.h>
using namespace std;

int matrix[110][110];
int dp[110][110];
int minCostInMazeTraversal(int sr, int sc, int dr, int dc)
{
    if(sr > dr || sc > dc) return INT_MAX;
    if(sr == dr && sc == dc) return matrix[sr][sc];

    if(dp[sr][sc] != -1) return dp[sr][sc];

    return dp[sr][sc] = matrix[sr][sc] + min(minCostInMazeTraversal(sr+1, sc, dr, dc), minCostInMazeTraversal(sr, sc+1, dr, dc));
}

int main()
{
    memset(dp, -1, sizeof(dp));
	int n, m;
    cin>>n >> m;


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            cin>>matrix[i][j];
        }
    }

    cout << minCostInMazeTraversal(0, 0, n-1, m-1) << endl;
}