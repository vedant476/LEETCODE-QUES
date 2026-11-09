class Solution {
public:
    string convert(string s, int k) {
      int length  =  s.length() ;
     string ans = "" ; 
     bool is = true ; 
     int curr_row = 0 ; 
     int curr_idx = 0 ; 
     int x = (k-1)+(k-2) ;
     int y  = x ; 

     if (k == 1 || s.length()<=k)  return s ; 


     for (int i = 0 ; i < s.length() ; i ++ )   {    
        ans += s[curr_idx] ; 

        if (curr_row > 0 && curr_row < k-1){
            if (is){
                curr_idx += y - 2 * curr_row + 1 ; 
            }
            else {
                curr_idx += 2*curr_row ; 
            }

            is = !is ; 
        }

        else {
            curr_idx += (y+1) ;
        }

        if (curr_idx > length -1){
            curr_row++ ; 
            curr_idx = curr_row ; 
            is = true ; 
        }
     }
        return ans; 
    }
};