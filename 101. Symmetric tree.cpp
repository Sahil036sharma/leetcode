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
bool issame(TreeNode* left , TreeNode* right){
    if(left==NULL && right==NULL)return true;
    if(left==NULL || right==NULL)return false;

    bool LST=issame(left->left , right->right);
    bool RST=issame(left->right ,right->left);

    return(left->val==right->val && LST && RST);
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        return issame(root->left,root->right);
    }

};