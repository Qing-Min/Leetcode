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