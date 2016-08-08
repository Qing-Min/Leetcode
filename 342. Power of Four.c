bool isPowerOfFour(int num) {
    if( ( num&(num-1) ) != 0 ){
        return false;
    }
    int count=0;
    while(num>0){
        num>>=1;
        count++;
    }
    if( ((count!=0)&&(0==(count-1)%2))||1==num ){
        return true;
    }
    return false;
}
