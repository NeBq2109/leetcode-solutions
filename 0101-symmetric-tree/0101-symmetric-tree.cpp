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
    bool isSymmetric(TreeNode* root) {
    
    if(root == NULL) return true;

    return areTreesSymetric(root->left, root->right);      
    }
private:
    bool areTreesSymetric(TreeNode* left, TreeNode* right)
    {
        if (left == NULL && right == NULL) return true;
        else if(left == NULL || right == NULL) return false;

        if(left->val != right->val) return false;

        bool firstBool = areTreesSymetric(left->right, right->left);
        bool secondBool = areTreesSymetric(left->left, right->right);

        return firstBool && secondBool;
    }
};