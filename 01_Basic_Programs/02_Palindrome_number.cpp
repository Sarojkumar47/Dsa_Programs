
//Function to check palindrome number
bool isPalindrome(int n)
{
    int x=n;
    int reverse=0;

    while(x!=0){
        reverse=reverse*10+x%10;
        x=x/10;
    }
 
    return (reverse==n);
    
}
 