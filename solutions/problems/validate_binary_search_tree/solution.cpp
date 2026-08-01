class Solution {
public:
    bool dfs(TreeNode* root,long long lower,long long upper) {
        if (root == nullptr) {
            return true;
        }

        if (root->val <= lower || root->val >= upper) {
            return false;
        }

        return dfs(root->left, lower, root->val) &&
               dfs(root->right, root->val, upper);
    }

    bool isValidBST(TreeNode* root) {
        return dfs(root, LLONG_MIN, LLONG_MAX);
    }
};