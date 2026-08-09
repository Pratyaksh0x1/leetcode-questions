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
TreeNode* solve(vector<int>& in, vector<int>& post,
                    int start, int end, int& pindex) {

        if (start > end)
            return NULL;
        int val = post[pindex--];
        TreeNode* root = new TreeNode(val);
        int pos = start;
        while (in[pos] != val)
            pos++;

        root->right = solve(in, post, pos + 1, end, pindex);
        root->left = solve(in, post, start, pos - 1, pindex);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       int pindex = postorder.size() - 1;

        return solve(inorder, postorder, 0,
       inorder.size() - 1, pindex);
    }
};