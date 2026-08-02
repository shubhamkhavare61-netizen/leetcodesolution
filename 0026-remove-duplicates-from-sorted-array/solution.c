int removeDuplicates(int* nums, int numsSize) {
    int i, k = 0;
    nums[k] = nums[0];
    k++;
    for (i = 1; i < numsSize; i++) {
        if (nums[i - 1] != nums[i]) {
            nums[k] = nums[i];

            k++;
        }
    }
    return k;
}
