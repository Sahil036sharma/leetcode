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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

bool same(TreeNode* root1, TreeNode* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL){
        return false;
    }
    bool lst =same(root1->left,root2->left);
    bool rst =same(root1->right,root2->right);

    if(root1->val== root2->val && lst==true && rst==true){
        return true;
    }
    return false;

}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return same(p,q);
    }
};