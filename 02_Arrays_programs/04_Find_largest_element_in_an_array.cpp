

int getLargest(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res])
        res=i;
    }
    return res;
}

//Time complexity - O(n)