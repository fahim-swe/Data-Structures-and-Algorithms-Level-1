#include <bits/stdc++.h>
using namespace std;

struct TreeNode 
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
    public: 

        TreeNode* prev = nullptr;

        bool isBSTM2(TreeNode* root)
        {
            if(root == nullptr) return true;

            bool left = isBSTM2(root->left);

            if(prev != nullptr && root->val <= prev->val) return false;
            
            prev = root;

            bool right = isBSTM2(root->right);

            return left & right;
        }
       

        bool isValidBST(TreeNode* root)
        {
            
           return isBSTM2(root);
        }
};


int main()
{
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(6);

    Solution S;
    cout << S.isValidBST(root);
}