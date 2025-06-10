int pivotIndex(int* nums, int numsSize)
{
        int r_sum = 0;
        int l_sum = 0;

        for (int i = 0; i < numsSize; i++)
        {
                l_sum += nums[i];
        }

        for (int i = 0; i < numsSize; i++)
        {
                l_sum -= nums[i];
                if (r_sum == l_sum) return i;
                r_sum += nums[i];
        }
        return -1;
}
