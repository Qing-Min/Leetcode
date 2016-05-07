/*For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 */
int titleToNumber(char* s) {
    int result=0;
    while('\0'!=*s){
        result=result*26+(*s-64);
        s++;
    }
    return result;
    
}
