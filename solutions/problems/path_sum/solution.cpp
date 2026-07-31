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
    int dfs(TreeNode* root , int targetSum , int &sum , bool &flag){
        if(root == nullptr || flag == true){
            return 0;
        }
        sum = sum + root->val;
        if(sum == targetSum && root->left == nullptr && root->right == nullptr){
            flag = true;
        }
        dfs(root->left , targetSum , sum , flag);
        dfs(root->right , targetSum , sum , flag);
        
        sum = sum - root->val;
        return 0;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool flag = false;
        dfs(root , targetSum , sum , flag);
        if(flag == true){
            return true;
        }
        return false;
    }
};