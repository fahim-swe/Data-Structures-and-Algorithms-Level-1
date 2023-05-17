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

        TreeNode *root;
        vector<int> path;
        int ans = 0;
       

        void dfs(TreeNode* node)
        {
            if(node == nullptr) return ;
            bool flag = false;

            bool check = true;
            dfsPath(this->root, node, flag, check);
          
            if(check) ans++;
          
            dfs(node->left);
            dfs(node->right);
        }

        void dfsPath(TreeNode* root, TreeNode* node, bool &flag,bool &check)
        {
            if(root == nullptr) return ;

            if(root == node){
                flag = true;
                return ;
            }

            if(root->val >= node->val ) 
            else ( root->val < node->val) {
                dfsPath(root->right, node, flag, check);
            } 

            if(flag) {
                if(root->val > node->val) {
                    cout << root->val << " ";
                    check = false;
                }
            }
        }

        int goodNodes(TreeNode* root)
        {
            this->root = root;
            dfs(root);
            return ans;
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
    
    vector<int> path;
    cout << S.goodNodes(root) << endl;
}