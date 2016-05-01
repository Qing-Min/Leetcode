void moveZeroes(int* nums, int numsSize) {
    int position=0;
    int flag=0;
    for(int i=0;i<numsSize;i++){
        if( (*(nums+i))!=0 ){
            *(nums+(position++))=*(nums+i);
            if(1==flag){
                *(nums+i)=0;
            }
        }
        else{
            flag=1;
        }
    }
}