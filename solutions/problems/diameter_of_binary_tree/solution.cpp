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
    int func(TreeNode*node , int &maxi){
        if(node == NULL) return 0;
        int lefty = func(node->left , maxi);
        int righty = func(node->right , maxi);
        maxi = max(maxi , lefty+righty);
        return (1 + max(lefty,righty));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        func(root , maxi);
        return maxi;
        
    }
};