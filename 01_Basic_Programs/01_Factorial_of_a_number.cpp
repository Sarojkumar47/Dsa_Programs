
//Function to fint factorial of a number

// Using iterative approach
long long int factorial(int N){
        long long int result=1;
        for(int i=1;i<=N;i++){
            result=result*i;
        }
        return result;
    }

    //Time complexity - O(n)



// Using recursive approach
    long long int factorial(int N){
    if (N == 0 || N == 1)
        return 1;
    return N * factorial(N - 1);
    }

    //Time complexity - O(n)
    //Space complexity - O(n)