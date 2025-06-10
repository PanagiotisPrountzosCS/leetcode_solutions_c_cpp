class Solution
{
    public:
        int longestOnes(vector<int>& nums, int k)
        {
                size_t l = 0;
                size_t r = 0;
                size_t zeroes = 0;
                int max_len = 0;

                if (!nums[r]) zeroes++;
                while (r < nums.size() - 1)
                {
                        if (zeroes <= k)
                        {
                                r++;
                                if (!nums[r]) zeroes++;
                                if (r - l > max_len) max_len = r - l;
                        }
                        else
                        {
                                if (!nums[l]) zeroes--;
                                l++;
                        }
                }
                if (zeroes <= k && r - l + 1 > max_len) max_len = r - l + 1;

                return max_len;
        }
};
