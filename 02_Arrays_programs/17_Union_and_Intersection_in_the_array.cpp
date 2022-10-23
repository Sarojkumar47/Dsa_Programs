/*Ques:- Given two arrays a[] and b[] of size n and m respectively. The task is to find union between 
these two arrays. Union of the two arrays can be defined as the set containing distinct elements 
from both the arrays. If there are repetitions,
then only one occurrence of element should be printed in the union. */


int doUnion(int a[], int n, int b[], int m)  {
        
    set<int> s;
        
        for(int i=0;i<n;i++)
        s.insert(a[i]);
        
        for(int i=0;i<m;i++)
        s.insert(b[i]);
        
        return s.size();
 }
    
 //Time complexity - O(n+m)log(n+m)  , TC nlogn to insert an element in a set
 //Space complexity - O(m+n);
 
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
 
    while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
}
 
 