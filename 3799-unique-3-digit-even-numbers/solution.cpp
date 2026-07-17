class Solution {
public: 
    int totalNumbers(vector<int>& digits) {
        array<int, 10> freq={0};
        bool hasEven=0;
        for(int x: digits){
            freq[x]+=(freq[x]<3);// 3 is enough, since 3-digit number
            hasEven|=(x%2==0);
        }
    //    print(freq);
        if (!hasEven) return 0;
        int cnt=0;
        for(int i=1; i<10; i++){
            if (freq[i]==0) continue;
            freq[i]--;
            for(int j=0; j<10; j++){
                if (freq[j]==0) continue;
                freq[j]--;
                for(int k=0; k<10; k+=2){
                    if (freq[k]==0) continue;
                    cnt++;
                }
                freq[j]++;//backtrack
            }
            freq[i]++;//backtrack
        }
        return cnt;
        
    }
};