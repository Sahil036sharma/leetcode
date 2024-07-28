#include<bits/stdc++.h>
using namespace std;
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
    vector<vector<int>> ans;
    void solve(TreeNode* root,int tar,vector<int> path){
        if(!root)
            return ;
        if(!root->left && !root->right ){
            if(root->val==tar){
                path.push_back(root->val);
                ans.push_back(path);
            }
           
            return ;
        }
        path.push_back(root->val);
        solve(root->left,tar-root->val,path);
        solve(root->right,tar-root->val,path);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ans.clear();
        vector<int> path;
        solve(root,targetSum,path);
        return ans;
    }
};