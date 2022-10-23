
//Count frequencies of element in sorted array

void countFrequencies(int arr[],int n){

    int i=1;
    int freq=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            i++;
            freq++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;

        i++;
        freq=1;

    }

    if(n==1 || arr[n-1]!=arr[n-2])
    cout<<arr[n-1]<<" "<<freq<<endl;
}

//Time complexity - O(n)

//for unsorted array we have to sort array first of all after apply this algo.