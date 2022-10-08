
//Normal method
void leftRotate(int arr[], int n, int d){
    int temp[d];

    for(int i=0;i<d;i++)
    temp[i]=arr[i];

    for(int i=d;i<n;i++)
    arr[i-d]=arr[d];

    for(int i=0;i<d;i++)
    arr[n-d+i]=temp[i];
   
}

//Time complexity - O(d+n-d+d) - O(n)
//Space complexity - O(d)


//Optimized method

void leftRotate(int arr[], int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

}

void reverse(int arr[],int low, int high){
    while(low<high){
        swap(arr[low],arr[high])
        low++;
        high--;
    }
}

// Time complexity - O(d+n-d+n)  - O(2n) - O(n)
// Space complexity - O(1)