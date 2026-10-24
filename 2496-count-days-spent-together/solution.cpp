class Solution {
public:
    int day(string s){
         int arr[12] ={0,31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
            
        return arr[stoi(s.substr(0, 2))-1] + stoi(s.substr(3));
    }

    int countDaysTogether(string aA, string lA, string aB, string lB) {   
        return max(0, day(min(lA, lB)) - day(max(aA, aB)) + 1);
    }
};