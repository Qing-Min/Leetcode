bool isUgly(int num) {
    int a2=0,a3=0,a5=0;
    if(num==0){return 0;}
 while(1){   
    a2=0;a3=0;a5=0;
    if(num%2==0){
        a2=1;
    }
    if(num%3==0){
        a3=1;
    }
    if(num%5==0){
        a5=1;
    }
    if((a2!=0)||(a3!=0)||(a5!=0)){
        num=num/( a2==1?2:a3==1?3:5 );
    }
    if(a2==0&&a3==0&&a5==0){
        if(num==1){return 1;}
        else{
            return 0;
        }
    }
}
}
