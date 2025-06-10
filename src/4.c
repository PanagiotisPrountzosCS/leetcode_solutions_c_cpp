double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size)
{
        int* merged = (int*)malloc(sizeof(int) * (nums1Size + nums2Size));
        int it1 = 0, it2 = 0;
        while (it1 < nums1Size && it2 < nums2Size)
        {
                if (nums1[it1] < nums2[it2])
                {
                        *(merged + it1 + it2) = nums1[it1];
                        it1++;
                }
                else
                {
                        *(merged + it1 + it2) = nums2[it2];
                        it2++;
                }
        }
        while (it1 < nums1Size)
        {
                *(merged + it1 + it2) = nums1[it1];
                it1++;
        }
        while (it2 < nums2Size)
        {
                *(merged + it1 + it2) = nums2[it2];
                it2++;
        }

        if ((nums1Size + nums2Size) % 2)
        {
                return merged[(nums1Size + nums2Size) / 2];
        }
        else
        {
                return 0.5 * (merged[(nums1Size + nums2Size) / 2] +
                              merged[(nums1Size + nums2Size) / 2 - 1]);
        }
}
