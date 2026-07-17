class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size() % 2 != 0){
            return false;
        }

        unordered_map<int,int> count;

        for(int nums : nums){
            count[nums]++;
        }

        for(auto it : count){            //auto coz it means key,value pair in map where key is first and value second
            if(it.second % 2 != 0)
            return false;
        }

        return true;
        
    }
};