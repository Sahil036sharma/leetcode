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

    int sumleft(TreeNode* root , string s ){
       if(root==NULL){

            return 0;
       }

       if(root->left==NULL && root->right==NULL){
        if(s=="left")
        return root->val;
       }
       int lst=sumleft(root->left,"left");
       int rst=sumleft(root->right,"right");
       return lst+rst;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        string s="";
        return sumleft(root,s);
        
    }
};