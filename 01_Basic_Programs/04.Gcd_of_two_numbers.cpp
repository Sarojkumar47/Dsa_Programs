
//Function to calculate the gcd of two numbers.

//Normal method
int gcd(int a, int b) {
    int minimum=min(a,b);
    for(int i=minimum;i>0;i--){
        if(a%i==0 && b%i==0){
            return i;
    }
}

//Time complexity - O(n) -> n is the minimum number in both number

//Optimized method 1 (euclidean algorithm)
int gcd(int a, int b) {
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}

//Optimized method 2
int gcd(int a, int b){
    if(b==0)
    return a;
    
    return gcd(b,a%b);

}
//Time complexity - O(log(min(a,b)))
