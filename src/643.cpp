class Solution
{
    public:
        double findMaxAverage(vector<int>& nums, int k)
        {
                int l = 0;
                int r = k - 1;
                int current_sum = 0;
                int max_sum = INT_MIN;

                for (int i = 0; i <= r; i++)
                {
                        current_sum += nums[i];
                }

                while (r < nums.size() - 1)
                {
                        if (current_sum > max_sum) max_sum = current_sum;
                        current_sum -= nums[l];
                        l++;
                        r++;
                        current_sum += nums[r];
                }
                if (current_sum > max_sum) max_sum = current_sum;

                return max_sum * 1.0 / k;
        }
};
