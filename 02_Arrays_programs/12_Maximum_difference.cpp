
//Ques:-Find maximum difference  arr[j]-arr[i] ,  where j>i

// Naive solution
  int maxDiff(int arr[],int n){

    int max_diff=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            max_diff=max(arr[j]-arr[i], max_diff);
        }

     }

    return max_diff;

    }
    //Time complexity - O(N*N)



// Optimized method 
int max_diff(int arr[],int n){
    
    int max_diff=INT_MIN;
    int minValue=arr[0];

    for(int i=1;i<n;i++){
        max_diff=max(max_diff,arr[i]-minValue);
        minValue=min(minValue,arr[i]);
    }

   return max_diff;
}
//Time complexity - O(N)