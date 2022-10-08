
Ques1:- Given a positive integer N, print count of set bits in it. 


//Normal method
int countSetBits(int n){
    int result=0;
    while(n>0){
        if(n%2!=0) 
        result++;
        n=n/2; 
    }
    return result;
}


//Optimized method (Brian Kerningam's algorithm)
int countSetBits(int n){
    int result=0;
    while(n>0){
        n=(n&(n-1));
        result++;
    }
    return result;
}


//Optimized method 2