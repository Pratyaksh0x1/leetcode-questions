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
class triplet{
public:
    long long maxi,mini;
    bool isValidBST;
};
triplet helper(TreeNode* root){
    if(root==NULL){
        return {LLONG_MIN,LLONG_MAX,true};
    }
    long long data =root->val;
    auto leftAns=helper(root->left);
    auto rightAns=helper(root->right);
    triplet ans;
    ans.maxi=max(data,max(leftAns.maxi,rightAns.maxi));
    ans.mini=min(data,min(leftAns.mini,rightAns.mini));
    ans.isValidBST=leftAns.isValidBST and rightAns.isValidBST and (leftAns.maxi<data and rightAns.mini>data);
    
    return ans;

}

    bool isValidBST(TreeNode* root) {
       return helper(root).isValidBST;      
    }
};