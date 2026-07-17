class Solution {
public:
    string multiply(string num1, string num2) {
        if(num2=="0" || num1=="0") return "0";
        int carry = 0;
        vector<int> product(num1.size()+num2.size(), 0);

        for(int i=num1.size()-1; i>=0; i--){
            for(int j=num2.size()-1; j>=0; j--){
                
                product[i+j+1] += ((num1[i]-'0')*(num2[j]-'0'));

                product[i+j] += product[i+j+1]/10;
                product[i+j+1] %=10;
            }
        }
     
        int i=0; 
        while(i<product.size() && product[i]==0) i++;
        string ans="";
        while(i < product.size()){
           ans.push_back(product[i++]+'0');
        }
        return ans;
    }
};

/*
23 
 3

lidx = 1-> 0
sidx = 0 ->-1

*/