class Solution {
public:
    int minAddToMakeValid(string s) {
        int A =0,B = 0;
        for( auto ch : s ){
            if( ch == '(')
                A++;
            else {
                if(A > 0){
                    A--;
                }
                else{
                    B++;}
            }      
        }
        return A+B;
    }
};