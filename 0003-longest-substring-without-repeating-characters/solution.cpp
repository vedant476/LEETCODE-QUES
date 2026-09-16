class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int maxwindow = 0;
      vector<int>temp(256,-1);
      int i=0;

      for(int j=0;j<s.length() && i<s.length();j++){
        int idx=s[j];
        if(temp[idx]>=i){
            i = temp[idx]+1;
        }
        temp[idx] = j;
        maxwindow = max(maxwindow,j-i+1);
      } 
      return maxwindow; 
        
        
    }
};