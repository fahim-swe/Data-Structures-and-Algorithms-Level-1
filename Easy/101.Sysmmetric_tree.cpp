#include <bits/stdc++.h>
using namespace std;



 // Definition for a binary tree node.
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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;

        return isSymmetric(root->left, root->right);
    }

    bool isSymmetric(TreeNode *left, TreeNode *right)
    {
        if(left == NULL || right == NULL) return left == right;

        if(left->val != right->val) return false;

        return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
    }

    void inOrderTravarsal(TreeNode *root)
    {
        if(root == NULL) return ;

        inOrderTravarsal(root->left);
        cout << root->val << " ";
        inOrderTravarsal(root->right);
    }
};



int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution S;
    S.inOrderTravarsal(root);
    cout << endl;
   
    cout << S.isSymmetric(root) << endl;
}