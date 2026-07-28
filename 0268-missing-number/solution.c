int missingNumber(int* nums, int numsSize) {
    int i,sum=0,sum1=0;
    sum=(numsSize * (numsSize+1))/2;
    for (i=0;i<numsSize; i++) {
        sum1=nums[i]+sum1;
    } 
    return sum-sum1;
}
