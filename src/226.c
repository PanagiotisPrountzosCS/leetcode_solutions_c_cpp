typedef struct TreeNode TreeNode;

TreeNode* invertTree(TreeNode* root)
{
        if (!root) return NULL;

        TreeNode* ltemp = invertTree(root->right);
        TreeNode* rtemp = invertTree(root->left);
        root->left = ltemp;
        root->right = rtemp;

        return root;
}