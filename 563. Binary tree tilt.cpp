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
int ans=0;
int tilt(TreeNode* root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL){
        return root->val;
    }
    int a=tilt(root->left);
    int b=tilt(root->right);
    ans+=abs(a-b);
    return root->val+a+b;
}
    int findTilt(TreeNode* root) {
        tilt(root);
        return ans;
    }
};
