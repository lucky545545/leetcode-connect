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
    void dfs(TreeNode* root , int targetsum , int &sum , vector<vector<int>> &out , vector<int> &currpath){
        if(root == nullptr){
            return;
        }
        sum += root->val;
        currpath.push_back(root->val);
        
        
        dfs(root->left , targetsum , sum , out , currpath);
        dfs(root->right , targetsum , sum , out , currpath);

        if(sum == targetsum && root->left == nullptr && root->right == nullptr){
            out.push_back(currpath);
        }
        
        currpath.pop_back();
        sum -= root->val;

        return;

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
        vector<vector<int>> out;
        vector<int> currpath;
        int sum = 0; 
        dfs(root , targetsum , sum , out , currpath);
        return out;
        
    }
};