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
    TreeNode* bst(TreeNode* root , vector<int>& arr){
        if(root == nullptr){
            return nullptr;
        }
        bst(root->left , arr);
        arr.push_back(root->val);
        bst(root->right , arr);

        return root;

    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        bst(root , arr);
        return arr[k-1];
        
    }
};