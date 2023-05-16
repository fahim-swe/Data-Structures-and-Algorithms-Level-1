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

    void dfs(TreeNode* node, TreeNode* p, bool &flag, TreeNode* &lca)
    {
        if(node == nullptr) return ;
        if(node == p) {
            flag = true;
          //  cout << node->val << " turn on " << flag << endl;


            return ;
        }

        if(!flag) dfs(node->left, p,  flag, lca);
        if(!flag) dfs(node->right, p,  flag, lca);



        if(flag){
           //  cout << node->val << " turn on " << flag << endl;
             if(lca->val > node->val){
                lca = node;
             }
        }

       // cout << lca->val << endl;
    }



    void modifyDfs(TreeNode* node, TreeNode* p, TreeNode* q, bool &flag)
    {

        if(node == nullptr) return ;

        if(node == p || node == q){
            cout << node->val << endl;
            flag = true;
            return ;
        }

        if(!flag) modifyDfs(node->left, p, q, flag);
        if(!flag) modifyDfs(node->right, p, q, flag);

        if(flag) cout << "finished visited " <<  node->val << endl;

      //  flag = false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        bool flag = false;

        TreeNode* lca = root;

       // dfs(root, p, flag, lca);
        //flag = false;
       // dfs(root, q, flag, lca);

       modifyDfs(root, p, q, flag);

        return lca;
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
    // cout << lca->val << endl;
}
