void swap(int* a, int* b)
{
        int buf = *a;
        *a = *b;
        *b = buf;
}

int removeElement(int* nums, int numsSize, int val)
{
        int result = numsSize;
        int* left = nums;
        int* right = nums + numsSize - 1;

        while (left <= right)
        {
                if (*left == val)
                {
                        swap(left, right);
                        right--;
                        result--;
                }
                else
                {
                        left++;
                }
        }
        return result;
}
