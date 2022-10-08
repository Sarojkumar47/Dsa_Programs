
//Fuction to calculate lcm of two numbers

//Normal method
int getLcm(int a, int b{
   int maximum=max(a,b);
   for(int i=maximum;i<=(a*b);i++){
    if(i%a==0 && i%b==0){
        return i;
   }

}
// Time complexity - O(a*b-max(a,b)) --> n is the maximum number

//Optimized method 1
int gcd(int a, int b){
    if(b==0)
    return a;

    return gcd(b,a%b);          // (lcm*gcd=a*b)
}

int getLcm(int a, int b){
    return (a*b)/gcd(a,b);
}

//Time complexity - O(log(min(a,b)))