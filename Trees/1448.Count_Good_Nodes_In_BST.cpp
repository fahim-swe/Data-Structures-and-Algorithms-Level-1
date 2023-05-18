#include <bits/stdc++.h>
using namespace std;


struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};


class Solution 
{
    public:
        int cnt = 0;
        
        void dfs(TreeNode* root, int prev)
        {
            if(root == nullptr) return ;

         //   cout << root->val << " " << prev << endl;
            if(root->val >= prev){
                cnt++;
            }
            dfs(root->left, max(prev, root->val));
            dfs(root->right, max(prev, root->val));
        }

        int goodNodes(TreeNode* root)
        {
           dfs(root, -1);
           return cnt;
        }
};

int main()
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->left->left = new TreeNode(3);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(5);

    Solution S;

    cout << S.goodNodes(root) << endl;
}