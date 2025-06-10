int maxDepth(struct TreeNode* root)
{
        if (!root) return 0;

        int left_depth = maxDepth(root->left) + 1;
        int right_depth = maxDepth(root->right) + 1;

        if (left_depth > right_depth) return left_depth;
        return right_depth;
}