class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> al(gain.size() + 1);
        al[0] = 0;
       for( int i = 0; i< gain.size();i++){
        al[i+1] = al[i] + gain[i];
       }
      int mx= INT_MIN;
      for( int i : al){
        if(i>mx) mx=i;
      }
        return mx;
    }
};