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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        int maxSum=INT_MIN;
        int cntr=0;
        while(!q.empty()){
            int sz=q.size();
            int sum=0;
            cntr++;
            while(sz--){
                auto f=q.front();
                q.pop();
                //print()
                // temp 
                sum+=f->val;
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }

            if(sum>maxSum){
                level=cntr;
                maxSum=sum;
            }
            
        }
        return level;
    }
};
    