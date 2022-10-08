

//Normal method
int isPower(int n){

    if(n==0)
    return false;

    while(n!=1){
        if(n%2!=0)
        return false;
        n=n/2;
    }
    return true;
}

//Optimized method 1 (Brian Kerningam's algorithm)
int isPower(int n){

    int result=0;

    if(n==0)
    return 0;

    while(n>0){
        n=(n&(n-1));
        result++;
    }

    if(result==1)
    return 1;
    else
    return 0;
}

//Optimized method 2
int isPower(int n){
    if(n==0)
    return 0;
    return ((n&(n-1))==0);
}