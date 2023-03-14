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

    TreeNode* constractBST(vector<int> &nums, int lo, int hi)
    {
        if(lo > hi) return NULL;
        int mid = (hi+lo)/2;
        TreeNode* left = constractBST(nums, lo, mid-1);
        TreeNode* right = constractBST(nums, mid+1, hi);

        TreeNode *root = new TreeNode(nums[mid]);
        root->left = left;
        root->right = right;
        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constractBST(nums, 0, nums.size()-1);
    }

    void inOrderTraversal(TreeNode *root)
    {
        if(root == NULL) return ;
        inOrderTraversal(root->left);
        cout << root->val << " ";
        inOrderTraversal(root->right);
    }

};

int main()
{
    int n;
    cin>>n;

    vector<int> v(n, 1);
    for(int i = 0; i < n; i++) cin>>v[i];

    Solution S;
    S.inOrderTraversal(S.sortedArrayToBST(v));
}