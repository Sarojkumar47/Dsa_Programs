

//Normal method
int power(int x, int n){
    int result=1;
    for(int i=0;i<n;i++){
        result=result*x;
    }
    return result;
}

//Optimized method
int power(int x, int n){
    int result=1;
    while(n!=0){
        if(n%2==0)
            result=result*x;
            x=x*x;
            n=n/2;
    }

}