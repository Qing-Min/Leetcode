//int calculateFactorial(int n){
//    int i=0;
//    unsigned long answer=1;
//    for(i=1;i<=n;i++){
//        answer=answer*i;
//    }
//    return answer;
//}
//int calculateCnm(int n,int m){
//    return ( calculateFactorial(n)/( calculateFactorial(n-m)*calculateFactorial(m) ) );
//}
//int climbStairs(int n) {
//    int kindsNum=0;
//    int numOf2=0;
//    int positionNum=0;
//    for(numOf2=0;numOf2<=n/2;numOf2++){
//        positionNum=n-numOf2;
//        kindsNum+=calculateCnm(positionNum,numOf2);
//    }
//    return kindsNum;
//}
//化大为小
int climbStairs(int n) {
 if (n<=3) return n;
       int a[2]={2,3};
       for(int i=4; i<=n; i++){
           int t = a[0] + a[1];
           a[0] = a[1];
           a[1] = t;
       }
       return a[1];
}
