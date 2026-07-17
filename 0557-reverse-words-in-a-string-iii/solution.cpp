class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end=0;
        while(end<s.size()){
            if(s[end]==' '){ 
                reverse (s.begin()+start,s.begin()+end);
                start=end+1;
            }
            end++;
        }
        reverse(s.begin()+start,s.begin()+end);
        return s;
    }
};