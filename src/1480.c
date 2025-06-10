/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize)
{
        int* result = (int*)malloc(sizeof(int) * numsSize);
        int sum = 0;
        int idx = 0;
        while (idx < numsSize)
        {
                sum += nums[idx];
                result[idx] = sum;
                idx++;
        }
        *returnSize = numsSize;
        return result;
}
