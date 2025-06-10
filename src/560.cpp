class Solution
{
    public:
        int subarraySum(vector<int>& nums, int k)
        {
                int l = 0;
                int result = 0;
                int sum = 0;
                unordered_map<int, int> seen_sums;
                seen_sums.insert({0, 1});

                for (int r = 0; r < nums.size(); r++)
                {
                        sum += nums[r];
                        auto it = seen_sums.find(sum - k);
                        if (it != seen_sums.end()) result += it->second;
                        seen_sums[sum]++;
                }

                return result;
        }
};
