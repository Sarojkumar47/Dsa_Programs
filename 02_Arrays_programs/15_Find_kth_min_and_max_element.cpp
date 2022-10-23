
//Ques:- Given an array arr[] and an integer K where K is smaller than size of array, the task is to find
 // the Kth smallest element in the given array. It is given that all array elements are distinct.

 int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+(r+1));
        
       return (arr[k-1]);
       
    }


//2nd method 

int kthSmallest(int arr[],int l,int r,int k){
       
      priority_queue<int> q;
        
        for(int i=0;i<k;i++){
            
            q.push(arr[i]);
        }
        
        for(int i =k;i<=r;i++){
            if(arr[i]<q.top()){
                q.pop();
                q.push(arr[i]);
            }
        }
        
        return q.top();
    
    }