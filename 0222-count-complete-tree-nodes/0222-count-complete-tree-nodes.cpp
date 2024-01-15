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
    int countNodes(TreeNode* root) {
    
    recursiveCount(root);

    return sum;
        
    }
private:
    int sum = 0;
    void recursiveCount(TreeNode *root)
    {
        if(root == nullptr) return;
        else sum += 1;

        recursiveCount(root->right);
        recursiveCount(root->left);
    }
};