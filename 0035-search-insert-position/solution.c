int searchInsert(int* a, int Size, int t) {
    for(int i = Size-1; i>=0;i--){
        if( a[i]< t) return i+1;
    }
    return 0;
}