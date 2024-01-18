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
    int getMinimumDifference(TreeNode* root) {
        
        int midNum = INT_MAX, minDiff = INT_MAX;

        minSearch(root, midNum, minDiff);

        return minDiff;
    }
private:
    void minSearch(TreeNode* root, int &midNum, int &minDiff)
    {
        if(root == nullptr) return;

        minSearch(root->left, midNum, minDiff);

        minDiff = min(minDiff, abs(root->val - midNum));
        
        midNum = root->val;

        minSearch(root->right, midNum, minDiff);
       

    }
};