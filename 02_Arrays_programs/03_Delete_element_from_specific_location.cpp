

int deleteElement(int arr[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x)
        break;
    }
    if(i==n)
    return n;

    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }

    return (n-1);
}


// Time complexity - O(n)

