class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ,right = height.size() -1 ,ans = 0;
        while(left < right){
            int width = right - left;
            int ht = min(height[left],height[right]);
            int vol = width * ht;
            ans = max(ans,vol);
            height[left] < height[right] ? left++ : right--;
        }
        return ans;
    }
};