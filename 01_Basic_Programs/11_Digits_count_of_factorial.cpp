
// Ques:- Given an integer N. You have to find the number of digits that appear in its factorial, 
// where factorial is defined as, factorial(N) = 1*2*3*4..*N and factorial(0) = 1.

int facDigits(int N){
     
        if(N<=0)
        {
            return 1;
        }
        else
        {
            double digitCount = 1;
            for(int i=N; i>=1; i--)
            {
                digitCount = digitCount+ log10(i);
            }
            return floor(digitCount);
        }
        
       }