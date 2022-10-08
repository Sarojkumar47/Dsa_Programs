
//Naive solution
void moveZeroesEnd(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],swap[j]);
                }
            }
        }
    }
}
//Time complexity - O(n*n)

//Optimized method
void moveZeroesEnd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

//Time complexity - O(n)