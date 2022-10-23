//Ques:-Given an unsorted array arr[] of size N having both negative and positive integers. 
//The task is place all negative element at the end of array without changing the order of positive 
//element and negative element.

void segregateElements(int arr[],int n)
    {
        int arr1[n];
        int k=0;
        
        for(int i=0;i<n;i++)
        if(arr[i]>=0)
        arr1[k++]=arr[i];
        
        for(int i=0;i<n;i++)
        if(arr[i]<0)
        arr1[k++]=arr[i];
        
        for(int i=0;i<n;i++)
        arr[i]=arr1[i];
    }