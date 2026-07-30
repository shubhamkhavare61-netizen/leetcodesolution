double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size) {
    int numssize = nums1Size + nums2Size;
    int num[numssize];
    int s, i = 0, j = 0, l = 0;
    while(i < nums1Size || j < nums2Size) {
        if(i < nums1Size && j < nums2Size) {

            if(nums1[i] <= nums2[j]) {
                num[l] = nums1[i];
                i++;
                l++;
            } else{
                num[l] = nums2[j];
                j++;
                // n[k+1]=nums2[j];
                l++;
            }
        }
        if(j >= nums2Size) // 5
        {
            num[l] = nums1[i];
            l++;
            i++;

        } else if(i >= nums1Size) {
            num[l] = nums2[j];
            l++;
            j++;
        }
    }
    s = numssize / 2;
    if(numssize % 2 == 0) {
        // m= new/2;
        return (num[s] + num[s - 1]) / 2.0;
    }

    return num[s];
}
