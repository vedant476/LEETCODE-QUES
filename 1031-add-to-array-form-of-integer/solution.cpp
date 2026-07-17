class Solution {
public:
    vector<int> addToArrayForm(vector<int>& n, int k) { 
        for(int i = n.size()-1;i>=0&&k>0;i--){
            k+=n[i];
            n[i] = k%10;
            k/=10;
        }

        while(k>0){
            n.insert(n.begin(),k%10);
            k/=10;
        }
        return n;
    }
   
};