
//Normal method
void printDivisiors(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0)
        cout<<i<<" ";
}
}


//Optimized method
void printDivisiors(int n){
    for(int i=1; i*i<=n; i++){
       if(n%i==0)
       cout<<i<<" ";

    for(;i>=1;i--){
        if(n%i==0)
        cout<<(n/i)<<" ";
    }
}