#include <string.h>
char* reverseString(char* s) {
    int len=strlen(s);
    char *last=s+(len-1);
    char chtemp=0;
    int i=0;
    for(i=0;i<(len/2);i++){
        chtemp=*(s+i);
        *(s+i)=*(last-i);
        *(last-i)=chtemp;
    }
    return s;
}
