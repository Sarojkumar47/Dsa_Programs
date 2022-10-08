
//Normal method
int secondLargest(int arr[],int n){
    int largest=getLargest(arr,n);  //Finding largest element
    int res=-1;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)
            res=i;
            else{
                if(arr[i]>arr[res])
                res=i;
            }
        }
    }
}
//Time complexity - O(n)


//Optimized method

int secondLargest(int arr[],int n){
    int largest=0;
    int res=-1;

    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
           largest=i;
           res=largest;
        }
        else{
            if(arr[i]!=arr[largest]){
                if(res==-1 || arr[i]>arr[res])
                res=i;
                
            }
        }
    }

}

//Time complexity - O(n)

