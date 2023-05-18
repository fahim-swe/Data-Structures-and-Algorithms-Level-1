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
    
       vector<int> v;

        void treeInOrder(TreeNode* root)
        {
            if(root == nullptr) return ;

            treeInOrder(root->left);
            v.push_back(root->val);
            treeInOrder(root->right);

        } 
        
        int kthSmallest(TreeNode* root, int k)
        {
            treeInOrder(root);
            return v[k-1];
        }
};
int main()
{
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);

    Solution S;
    cout << S.kthSmallest(root, 1) << endl;
}