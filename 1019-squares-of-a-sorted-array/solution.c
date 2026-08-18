/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int m,k,key;
    int *ans=(int *)malloc(numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++){   
        ans[i]=nums[i] * nums[i];
    }
    for(k=1;k<numsSize;k++){   
        //5 6 1 6 9
        key=ans[k];
        for(m=k-1;m>=0;m--){
            if(key<ans[m]){
                ans[m+1]=ans[m];
            }
            else 
             break;
        }          
        ans[m+1]=key;
    } 
    *returnSize=numsSize;
    return ans;
}
