int isAnagram(char* s, char* t) {
    int charsCount[26]={0};
    int i=0;
    while('\0'!=*s){
        charsCount[(*s)-97]++;
        s++;
    }
    while('\0'!=*t){
        charsCount[(*t)-97]--;
        t++;
    }
    for(;i<26;i++){
        if(charsCount[i]!=0){
            return 0;
        }
    }
    return 1;
}
