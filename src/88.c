void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
        int* helper = (int*)malloc(nums1Size * sizeof(int));
        int n1i = 0;
        int n2i = 0;

        while (n1i < m && n2i < n)
        {
                if (nums1[n1i] < nums2[n2i])
                {
                        helper[n1i + n2i] = *(nums1 + n1i);
                        n1i++;
                }
                else
                {
                        helper[n1i + n2i] = *(nums2 + n2i);
                        n2i++;
                }
        }

        while (n1i < m)
        {
                helper[n1i + n2i] = *(nums1 + n1i);
                n1i++;
        }

        while (n2i < n)
        {
                helper[n1i + n2i] = *(nums2 + n2i);
                n2i++;
        }

        for (int i = 0; i < nums1Size; i++) nums1[i] = helper[i];
        free(helper);
}
