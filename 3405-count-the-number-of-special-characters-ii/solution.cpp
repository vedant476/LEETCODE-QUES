class Solution {
public:
    int numberOfSpecialChars(string& word) {
        int n=word.size();
        int a[26], A[26];
        fill(a, a+26, -1); // Initialize 
        fill(A, A+26, -1); 
        for(int i=0; i<n; i++){
            char c=word[i];
            if (c<='Z'){
                if(A[c-'A']==-1) A[c-'A']=i;
            }
            else a[c-'a']=i;
        }
        int cnt=0;
        for(int i=0; i<26; i++){
            if (a[i]==-1 || A[i]==-1) continue;
            cnt+=(a[i]<A[i]);
        }
        return cnt;
    }
};


auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();