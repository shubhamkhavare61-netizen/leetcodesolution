void sortColors(int* nums, int numsSize) {
    int i, j, key;
    for (i = 1; i < numsSize; i++) {

        // [2,0,2,1,1,0]
        key = nums[i];
        for (j = i - 1; j >= 0; j--) {
            if (nums[j] > key)
                nums[j + 1] = nums[j];
            else
                break;
        }
        nums[j + 1] = key;
    }
}
