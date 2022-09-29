
//Normal method
for(int i =2;i<=n;i++){
    if(isPrime(i))   // calling prime function to check if it is prime or not
    cout<<i<<endl;
}


//Optimized method (seive algorithm)

void seiveMethod(int n){
    vector<bool> isPrime(n+1,true);

    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j] = false;       // O(nloglogn)
        }
}
