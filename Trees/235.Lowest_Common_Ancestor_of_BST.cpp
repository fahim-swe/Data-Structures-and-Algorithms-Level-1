#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{

    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};


 class Solution
{

public:

    


    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL) return root;

        if(root->val == p->val   || root->val == q->val){
            return root;
        } 


        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(left == NULL) return right;
        if(right == NULL) return left;

        return root;
    }
};



int main()
{

    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);


    Solution S;
    TreeNode* lca =  S.lowestCommonAncestor(root, root->left->right->right, root->right->right);
    cout << lca->val << endl;
}
