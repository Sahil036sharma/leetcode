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
    void sum(TreeNode* root, int& ans, int result) {
        if (root == NULL) {
            return; // Check for NULL before accessing root->val
        }
        
        result = result * 10 + root->val; // Update the result with the current node's value
        
        // If it's a leaf node, add the current result to ans
        if (root->left == NULL && root->right == NULL) {
            ans += result;
        } else {
            // Recur for left and right children
            sum(root->left, ans, result);
            sum(root->right, ans, result);
        }
    }
    
    int sumNumbers(TreeNode* root) {
        int ans = 0; // Initialize the answer
        sum(root, ans, 0); // Start the recursive sum
        return ans; // Return the final sum
    }
};