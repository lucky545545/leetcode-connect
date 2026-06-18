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
    void postorder(TreeNode* node , vector<int>& out){
        if(node == nullptr){
            return;
        }
        postorder(node->left , out);
        postorder(node->right , out);
        out.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int> out;
       postorder(root , out);
       return out; 
    }
};