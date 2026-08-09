int findMin(int* nums, int numsSize) {
    if (numsSize == 1 || numsSize == 2) {
        if (numsSize == 1)
            return nums[0];
        else {
            if (nums[0] < nums[1])
                return nums[0];
            return nums[1];
        }
    }
    for (int m = 1; m < numsSize - 1; m++) {
        if (nums[m - 1] > nums[m] && nums[m] < nums[m + 1])
            return nums[m];
    }
    if (nums[0] < nums[numsSize - 1])
        return nums[0];
    return nums[numsSize - 1];
}
