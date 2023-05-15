
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{

    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr){}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{

public:
    TreeNode* invertTree(TreeNode *root)
    {

        if(root == nullptr) return nullptr;

        TreeNode *left = invertTree(root->left);
        TreeNode *right =invertTree(root->right);

        root->left = right;
        root->right = left;

        return root;
    };
};

void InOrderTraverse(TreeNode *root)
{

    if(root  == nullptr) return ;

    InOrderTraverse(root->left);
    cout << root->val << " ";
    InOrderTraverse(root->right);
}




int main()
{

    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    InOrderTraverse(root);
    cout << endl;
    Solution S;
    S.invertTree(root);
    InOrderTraverse(root);
}
