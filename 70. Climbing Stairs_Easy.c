int calculateFactorial(int n){
    int i=0;
    unsigned long answer=1;
    for(i=1;i<=n;i++){
        answer=answer*i;
    }
    return answer;
}
int calculateCnm(int n,int m){
    return ( calculateFactorial(n)/( calculateFactorial(n-m)*calculateFactorial(m) ) );
}
int climbStairs(int n) {
    int kindsNum=0;
    int numOf2=0;
    int positionNum=0;
    for(numOf2=0;numOf2<=n/2;numOf2++){
        positionNum=n-numOf2;
        kindsNum+=calculateCnm(positionNum,numOf2);
    }
    return kindsNum;
}
