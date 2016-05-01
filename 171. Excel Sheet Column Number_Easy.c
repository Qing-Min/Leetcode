#include <string.h>
int twentysix(int n){
    int result=1;
    while(n){
        result=result*26;
        n--;
    }
    return result;
}
int titleToNumber(char* s) {
    int n=strlen(s);
    int result=0;
    int i=0;
    while(n){
        result+=((int)(*(s+n-1))-64)*twentysix(i++);
        n--;
    }
    return result;
}