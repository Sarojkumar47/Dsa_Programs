
// Ques:- Check string is palindrome or not in Character array

// Using Loop 

int isPalindrome(char S[])
{
    
    int start=0;
    int end=strlen(S)-1;
    
    while(start<=end){
        if(S[start]!=S[end]){
           return 0;
        }
        
       start++;
       end--;
    }
    
   return 1;
    
}

Time complexity - 0(n)
 

//Using recursion

 bool isPalindrome(string str, int start, int end){
   if(start>=end)
   return true;

   return (str[start]==str[end]&&isPalindrome(str,start++,end--));
 }

 Time complexity - 0(n)
 Auxiliary space complexity - 0(n)