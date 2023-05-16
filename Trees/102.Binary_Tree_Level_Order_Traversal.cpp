#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left(left), right(right){}
};

class Solution
{
public:

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        vector<int> v;

        queue<TreeNode*> q1, q2;
        q1.push(root);

        while(!q1.empty())
        {
            TreeNode* current = q1.front();
            v.push_back(current->val);

            q1.pop();

            if(current->left != nullptr) q2.push(current->left);
            if(current->right != nullptr) q2.push(current->right);

            if(q1.empty())
            {
                ans.push_back(v);
                v.clear();

                while(!q2.empty()){
                    q1.push(q2.front());
                    q2.pop();
                }
            }
        }



        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < ans[i].size(); j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

        return ans;
    }

    void bfs(TreeNode* node)
    {
        vector<int> v;
        queue<TreeNode*> q1, q2;
        q1.push(node);

        while(!q1.empty() )
        {



            TreeNode* current =  q1.front();
            v.push_back(current->val);
            q1.pop();



            if(current->left != nullptr) q2.push(current->left);
            if(current->right != nullptr) q2.push(current->right);

            if(q1.empty()) {
                v.push_back(-1);


                while(!q2.empty()){
                    q1.push(q2.front());
                    q2.pop();
                }

            }

        }

        for(auto x: v){
           if(x == -1) cout << endl;
           else cout << x << " ";
        }
    }
};


int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(10);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution S;
    // S.bfs(root);
    S.levelOrder(root);
}
