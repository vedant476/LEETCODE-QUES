/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int t, int* rs) {
    
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(nums[i]+nums[j]==t){
                
                int* res = (int*)malloc(2 * sizeof(int));res[0]=i;
                res[1]=j;
                *rs = 2;
                return res;
            }
        }
        
    }
    rs=0;
    return NULL;
    
}