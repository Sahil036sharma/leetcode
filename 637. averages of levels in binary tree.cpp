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
    
    vector<double> averageOfLevels(TreeNode* root) {
          vector<double>avg;
        if(root==nullptr)
        return avg;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int sz=q.size();
             double sum =0;
        for(int i=0;i<sz;i++){
            TreeNode* f=q.front();
            q.pop();
            sum+=f->val;
             if(f->left != NULL) q.push(f->left);
                if(f->right != NULL) q.push(f->right);
            }
        
                double average = sum / sz;
                avg.push_back(average);
        }
        return avg;
    }
};
