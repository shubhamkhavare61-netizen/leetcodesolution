/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    
  //  int  even[numsSize-1];
   // int odd[numsSize-1];
  int *even=(int *)malloc(numsSize * sizeof(int));
    int left = 0, right = numsSize-1,k=0;

   // int *odd=(int *)malloc(numsSize *  sizeof(int));
    
    while(k<numsSize){
        if(nums[k]%2==0){
            
            even[left]=nums[k];
            left++;
            k++;
          //  n++;
            }
        else {
           // right++;
            even[right]=nums[k];
            right--;
            //l++;
            k++;
            }
    }
        
        *returnSize=numsSize;
    
  //  free(ev);
    return even;
    
    
    
}
