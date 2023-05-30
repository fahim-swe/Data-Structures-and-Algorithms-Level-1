#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0, col = matrix[0].size()-1;

        while(row < matrix.size()  && col >= 0)
        {
            if(matrix[row][col] == target) return true;

            else if(matrix[row][col] > target) col--;
            else row++;
        }

        return false;
    }
};


int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    Solution S;
    cout << S.searchMatrix(matrix, 13) << endl;
    cout << S.searchMatrix(matrix, 30) << endl;
}