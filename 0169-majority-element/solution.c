int majorityElement(int* nums, int n) {
    int ans, cnt = 0;
        for(int i=0;i<n;i++){
            if(cnt == 0){
                cnt = 1;
                ans = nums[i];
            }
            else if(nums[i] == ans){
                cnt++;
            }
            else{
                cnt--;
            }
        }
    return ans;
}