int titleToNumber(char* s) {
    int result=0;
    while('\0'!=*s){
        result=result*26+(*s-64);
        s++;
    }
    return result;
    
}
