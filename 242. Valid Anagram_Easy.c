bool isAnagram(char* s, char* t) {
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
        if(*ttemp='\0'){
            return false;
        }
        stemp++;
    }
    ttemp=t;
    while(*ttemp!='\0'){
        if(*ttemp!='#'){
            return false;
        }
        ttemp++;
    }
    return true;
}