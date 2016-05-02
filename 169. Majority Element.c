//主数个数大于一半，去除每一对不同的数后，剩下的数字就是主数
int majorityElement(int* nums, int numsSize) {
    int candidate=0;
    int counter=0;
    int i=0;
    if(numsSize==1){
        return *nums;
    }
    for(;i<numsSize;i++){
        
        if( *(nums+i)==candidate ){
            counter++;
        }
        else if(counter==0){
            candidate=*(nums+i);
            counter=1;
        }
        else{
            counter--;
        }
    }
    return candidate;
    
}
