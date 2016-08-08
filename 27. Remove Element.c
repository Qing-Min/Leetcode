int removeElement(int* nums, int numsSize, int val) {
    if(nums==NULL||numsSize==0){
        return 0;
    }
    int count=0,i=0,position=numsSize;
    int *read=nums;
    for(i=0;i<numsSize;i++){
        //if(i==(position-1)){
      //      break;
      //  }
        if(read[i]==val){
            count++;
            int j=numsSize-1;
            for(;j>=i;j--){
                if(read[j]!=val){
                    read[i]=read[j];
                    read[j]=val;
                    count--;
                    break;
                }
            }
        }
    }
    return (numsSize-count);
}
