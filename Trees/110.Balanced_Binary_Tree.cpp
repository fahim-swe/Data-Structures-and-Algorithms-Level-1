#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class Solution {
public:

    int helper(TreeNode *node, bool &result)
    {

        if(node == nullptr) return 0;

        int leftHeight = helper(node->left, result);
        int rightHeight = helper(node->right, result);

        if(abs(leftHeight - rightHeight) > 1) result = false;

        return 1 + max(leftHeight, rightHeight);
    }
    bool isBalanced(TreeNode* root) {
        bool result = true;


        helper(root, result);

        return result;

    }
};


int main()
{

    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution S;
    cout << S.isBalanced(root) <<endl;
}
