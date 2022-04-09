

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int *arr = (int *)malloc(sizeof(int) * (nums1Size + nums2Size));
    float ans;
    int i = 0, j = 0, k = 0;
    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] <= nums2[j])
            arr[k++] = nums1[i++];
        if (nums1[i] >= nums2[j])
            arr[k++] = nums2[j++];
    }    

    if (i < nums1Size)
    {
        for (i; i < nums1Size; i++)
        {
            arr[k++] = nums1[i];
        }
    }
    else
    {
        for (i; i < nums1Size; i++)
        {
            arr[k++] = nums1[i];
        }
    }
    // for (int k = 0; k < nums1Size + nums2Size; k++)
    // {
    //     if (k < nums1Size)
    //         arr[k] = nums1[k];
    //     else
    //         arr[k] = nums2[k];
    // }

    if ((i + j) % 2 == 0)
    {
        ans = (((arr[i] + arr[j]) / 2) + ((arr[i] + arr[j] + 2) / 2)) / 2;
    }
    else
        ans = (arr[i] + arr[j]) / 2;

    return ans;
}