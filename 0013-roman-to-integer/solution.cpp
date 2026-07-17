
class Solution {
public:
    int get_int(char c)
    {
        switch (c)
        {
            case 'I':     
                return 1 ;
            case 'V' :
                return 5 ;
            case 'X'   :
               return 10 ;
            case 'L'  :
                return  50 ;
            case 'C'  :
                return 100 ;
            case 'D'     :
                return 500 ;
            case 'M'  :   
                return 1000;
            default :
            return 0 ; 
        }
    }

    int romanToInt(string s) {
        int sum = 0; 
        if(s.size()==0)
            return 0 ;
        if(s.size()==1)
            return get_int(s[0]) ;

        for (int i = s.size()-1; i>=0; i--)
        {
            if(i-1>=0)
            {
                if( get_int(s[i]) > get_int(s[i-1]))
                {
                    sum += get_int(s[i]) - get_int(s[i-1]);
                    i--;
                }
                else 
                    sum += get_int(s[i]);
            }
            else
            {
                sum += get_int(s[i]);
            }
        }
        return sum;

    }
};