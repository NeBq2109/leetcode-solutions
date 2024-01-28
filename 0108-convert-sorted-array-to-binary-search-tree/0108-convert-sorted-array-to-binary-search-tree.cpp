/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return solveNode(nums, 0, nums.size() - 1);
    }

    TreeNode* solveNode(const vector<int>& nums, int low, int high)
    {
        if(low > high) return nullptr;

        int mid = (low + high) / 2;

        TreeNode* root = new TreeNode(nums.at(mid));

        root->left = solveNode(nums, low, mid - 1);
        root->right = solveNode(nums, mid + 1, high);

        return root;

    }
};