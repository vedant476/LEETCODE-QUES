class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(100001,0);
for(int i = 0; i<nums.size();i++){
    count[nums[i]+50000]++;
}
int k =0;
for(int i =0; i<count.size();i++){
    while(count[i]>0){
        nums[k]=i-50000;
        k++;
        count[i]--;
    }
}
    }
};