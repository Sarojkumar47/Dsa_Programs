

int removeDuplicate(int arr[], int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i+1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

//Time complexity - O(n)