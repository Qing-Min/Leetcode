int isAnagram(char* s, char* t) {
    char * stemp=s;
    char * ttemp=t;
    while(*stemp!='\0'){
        ttemp=t;
        while(*ttemp!='\0'){
            if(*stemp==*ttemp){
                *stemp='#';
                *ttemp='#';
                break;
            }
            ttemp++;
        }
        if('\0'==*ttemp){
            return 0;
        }
        stemp++;
    }
    ttemp=t;
    while(*ttemp!='\0'){
        if(*ttemp!='#'){
            return 0;
        }
        ttemp++;
    }
    return 1;
}
