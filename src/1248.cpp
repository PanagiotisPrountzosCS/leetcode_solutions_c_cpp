class Solution
{
    public:
        int numberOfSubarrays(vector<int>& nums, int k)
        {
                vector<int> odds;
                odds.push_back(-1);  // Before start

                for (int i = 0; i < nums.size(); ++i)
                {
                        if (nums[i] % 2 == 1) odds.push_back(i);
                }

                odds.push_back(nums.size());  // After end

                int result = 0;

                for (int i = 1; i + k < odds.size(); ++i)
                {
                        int left = odds[i] - odds[i - 1];
                        int right = odds[i + k] - odds[i + k - 1];
                        result += left * right;
                }

                return result;
        }
};
