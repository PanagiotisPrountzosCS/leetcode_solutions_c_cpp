class Solution
{
    public:
        int singleNumber(vector<int>& nums)
        {
                int mask = 0;
                for (const auto i : nums) mask ^= i;
                return mask;
        }
};
