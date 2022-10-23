

//Ques:- Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

void sort012(int a[], int n)
    {
        int i=0;
        int j=0;
        int k=0;

        for(int t=0;t<n;t++){
            
            if(a[t]==0)
            i++;
            else if(a[t]==1)
            j++;
            else
            k++;
            
        }
        
        int p=0;
        
        while(i>0){
            a[p++]=0;
            i--;
        }
        
         while(j>0){
            a[p++]=1;
            j--;
        }
        
         while(k>0){
            a[p++]=2;
            k--;
        }
        
    }