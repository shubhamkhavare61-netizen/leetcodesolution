int searchInsert(int* nums, int numsSize, int target) {
    if (nums[0] == target || target < nums[0])
        return 0;
    for (int i = 1; i < numsSize; i++) {
        // if(numsSize])
        if (nums[i - 1] == target)
            return i - 1;
        if (nums[i - 1] < target && target < nums[i])
            return i;
    }
    if(nums[numsSize-1]==target)
        return numsSize-1;
    return numsSize;
}
