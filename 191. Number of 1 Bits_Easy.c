int hammingWeight(uint32_t n) {
    int count=0,i=0,comparor=1;
    for(;i<32;i++){
        if( n&(comparor<<i) ){
            count++;
        }
    }
    return count;
}
