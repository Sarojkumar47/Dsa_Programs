
//Function to find out trailing zeroes
int getTralingZeroes(int n){
    
    int result=0;
    for(int i=5;i<=n;i=i*5){
       result=result+n/i;
    }
    return result;

}