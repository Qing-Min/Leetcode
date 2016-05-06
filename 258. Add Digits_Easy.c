/*Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

Follow up:
Could you do it without any loop/recursion in O(1) runtime*/
long int calculatebitssum(long int num){
    long int divid=1;
    int sum=0;
    while( num/divid>0 ){
        sum+=( (num%(divid*10)) /divid);
        num=num-(num%(divid*10)) ;
        divid=divid*10;
    }
    return sum;
}
int addDigits(int num) {
    while( num>9 ){
        num=calculatebitssum(num);    
    }
    
return num;
}
