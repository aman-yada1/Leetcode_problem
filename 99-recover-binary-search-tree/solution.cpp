// 0 ms | 60.7 MB
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
    TreeNode *pre = NULL, *first = NULL, *sec = NULL;
    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        if(pre != NULL && pre->val > root->val){
            if(first == NULL){
                first = pre;
            }
            sec = root;
        }
        pre = root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first->val,sec->val);
    }
};