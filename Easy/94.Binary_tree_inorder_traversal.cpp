
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
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL) return {};

        vector<int> left, right;
        
        left = inorderTraversal(root->left);
        
        right = inorderTraversal(root->right);

        vector<int> ans;
        for(int i = 0; i < left.size(); i++) ans.push_back(left[i]);
        
        ans.push_back(root->val);
        
        for(int i = 0; i < right.size(); i++) ans.push_back(right[i]);
        
        return ans;
    }
};

void PrintInOrder(TreeNode *root)
{
    if(root == NULL) return ;
    
    PrintInOrder(root->left);
    cout << root->val << endl;
    PrintInOrder(root->right);
}


int main()
{
    
}