#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};


class Solution
{

public:

    void bfs(TreeNode* node, vector<int> &rightViewOfBST)
    {
        queue<TreeNode*> q1, q2;
        q1.push(node);

        if(node != nullptr) rightViewOfBST.push_back(node->val);

        while(!q1.empty())
        {

            TreeNode* currentNode = q1.front();
            q1.pop();

            if(currentNode != nullptr){
                if(currentNode->left != nullptr) q2.push(currentNode->left);
                if(currentNode->right != nullptr) q2.push(currentNode->right);
            }


            if(q1.empty())
            {

                while(!q2.empty()){
                    if(q2.size() == 1) {
                        rightViewOfBST.push_back(q2.front()->val);
                    }
                    q1.push(q2.front());
                    q2.pop();
                }
            }
        }
    }

    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> ans;

        bfs(root, ans);
        return ans;

    }
};


int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);


    Solution S;
    S.rightSideView(root);
}
