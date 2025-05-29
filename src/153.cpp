class Solution
{
    public:
        int findMin(vector<int> &nums)
        {
                int l = 0, r = nums.size() - 1;
                int m;
                while (nums[l] > nums[r])
                {
                        m = (l + r) / 2;
                        if (nums[m] > nums[l])
                                l = m;
                        else
                                r = m;
                }
                return nums[(r + 1) % nums.size()];
        }
};
