int minSubArrayLen(int target, int* nums, int numsSize)
{
        int l = 0;
        int sum = 0;
        int min_len = INT_MAX;
        int r = 0;

        sum = nums[r];

        while (r < numsSize - 1)
        {
                if (sum < target)
                {
                        r++;
                        sum += nums[r];
                }
                else if (sum > target)
                {
                        if (r - l + 1 < min_len) min_len = r - l + 1;
                        sum -= nums[l];
                        l++;
                }
                else
                {
                        if (r - l + 1 < min_len) min_len = r - l + 1;
                        r++;
                        sum += nums[r];
                        sum -= nums[l];
                        l++;
                }
        }
        while (sum >= target)
        {
                if (r - l + 1 < min_len) min_len = r - l + 1;
                sum -= nums[l];
                l++;
        }
        if (min_len == INT_MAX) min_len = 0;

        return min_len;
}
