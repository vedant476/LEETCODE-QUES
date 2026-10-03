class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        if(b<a) return numMovesStones(b,a,c);
        if(c<b) return numMovesStones(a,c,b);
        return {(b-a==2 || c-b==2) ? 1:(b-a!=1)+(c-b!=1), c-a-2};
    }
};