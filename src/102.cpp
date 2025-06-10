class Solution
{
    public:
        vector<vector<int>> levelOrder(TreeNode* root)
        {
                std::queue<int> bfsq;
                std::queue<int> depths;

                bfs(root, bfsq, depths, 1);

                auto copy = depths;

                int result_size = 0;
                while (!depths.empty())
                {
                        if (depths.front() > result_size)
                                result_size = depths.front();
                        depths.pop();
                }

                vector<vector<int>> result(result_size);

                while (!bfsq.empty())
                {
                        auto i = bfsq.front();
                        auto d = copy.front();
                        copy.pop();
                        bfsq.pop();

                        result[d - 1].push_back(i);
                }
                return result;
        }

    private:
        void bfs(TreeNode* root, std::queue<int>& q, std::queue<int>& dep_q,
                 int depth)
        {
                if (!root) return;

                q.push(root->val);
                dep_q.push(depth);
                bfs(root->left, q, dep_q, depth + 1);
                bfs(root->right, q, dep_q, depth + 1);
        }
};