#include<iostream>
using namespace std;

                    
int main(){

    int a[]={0,2,1,2,0};

    int n=5;

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

        
        for(int x=0;x<i;x++)
        a[x]=0;
        
        for(int y=i;y<(i+j);y++)
        a[y]=1;
        
        for(int z=(i+j);z<(i+j+k);z++)
        a[z]=2;

        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        
  
return 0;
}