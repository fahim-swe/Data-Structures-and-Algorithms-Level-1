#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution
{

public:

    int treeHeight(TreeNode *node, int &dia)
    {
        if(node == nullptr) return 0;

        int leftHeight = treeHeight(node->left, dia);
        int rightHeight = treeHeight(node->right, dia);

        dia = max(dia, leftHeight + rightHeight);


      //  cout << node->val << " " << leftHeight  << " " <<   rightHeight << " " << dia << endl;
        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int dia = 0;
        return treeHeight(root, dia);
    }
};



int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution S;
    cout << S.diameterOfBinaryTree(root) << endl;
}
