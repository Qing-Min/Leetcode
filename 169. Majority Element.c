int * sort(int * nums,int numsSize){
    int n=0;
    int i=0;
    int temp;
    for(n=0;n<numsSize-1;n++){
        for(i=0;i<numsSize-1-n;i++){
            if( *(nums+i)<*(nums+i+1)){
                temp=*(nums+i);
                *(nums+i)=*(nums+i+1);
                *(nums+i+1)=temp;            
            }
        }
    }
    return nums;
}
int majorityElement(int* nums, int numsSize) {
    nums=sort(nums,numsSize);
    return *(nums+(numsSize/2));
    
}
