

//Print leaders element 
//Leaders - If all right element is less than that element - 10 -> 4, 7, 8, 2  , 6(not)-> 7,2,3

//Naive solution 
void printLeaders(int arr,int n){

    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=true;
                break;
            }
        }

        if(flag==false){
            cout<<arr[i]<<" ";
        }
    }

}
//Time complexity - O(n*n)

//Optimized method
void printLeaders(int arr,int n){

    int current_element=arr[n-1];
    cout<<current_element;

    for(int i=n-2;i>=0;i--){
        if(current_element<arr[i]){
            current_element=arr[i];
            cout<<current_element;
        }
    }

}

//Time complexity - O(n)
//Drwaback - it prints leaders element from right to left
//for printing left to right , store leaders in an array and reverse that.
