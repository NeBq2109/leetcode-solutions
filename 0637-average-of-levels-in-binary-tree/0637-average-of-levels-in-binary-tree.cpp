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

    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<double> result;
        q.push(root);

        while(!q.empty())
        {
            size_t size = q.size();
            double sum = 0;

            for(int i = 0 ; i < size ; i++)
            {
                root = q.front();
                sum += root->val;
                q.pop();

                if(root->left != nullptr) q.push(root->left);
                if(root->right != nullptr) q.push(root->right);
            }
            result.push_back(sum / size);
        }
        return result;

    }
};