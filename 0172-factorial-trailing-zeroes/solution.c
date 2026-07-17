int trailingZeroes(int n) {
    if(n==0) return 0;
        
        int tzeros=0;
        for(int i=5;i<=n;i*=5){
            tzeros=tzeros+n/i;
        }
        
       
        return tzeros;
}