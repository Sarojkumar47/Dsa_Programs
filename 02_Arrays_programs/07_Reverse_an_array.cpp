
void reverseArray(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

//Time complexity - O(n)
