class Solution
{
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {
                unordered_map<int, int> seen_diffs;

                for (int i = 0; i < nums.size(); i++)
                {
                        auto it = seen_diffs.find(target - nums[i]);
                        if (it != seen_diffs.end())
                        {
                                return {it->second, i};
                        }
                        seen_diffs.insert({nums[i], i});
                }

                return {-1, -1};
        }
};
