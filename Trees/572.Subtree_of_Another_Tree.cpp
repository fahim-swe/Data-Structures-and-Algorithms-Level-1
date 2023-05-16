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

    bool isSame(TreeNode* node1, TreeNode* node2)
    {
        if(node1 == nullptr && node2 == nullptr) return true;

        if(node1 == nullptr || node2 == nullptr) return false;
        if(node1->val != node2->val ) return false;

        return isSame(node1->left, node2->left) && isSame(node1->right, node2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot)
    {
        if(root == nullptr || subRoot == nullptr) return false;

        if(isSame(root, subRoot)) return true;


        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot) ;
    }
};

int main()
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(0);

    Solution S;
    cout << S.isSubtree(root, root->left) << endl;
}
