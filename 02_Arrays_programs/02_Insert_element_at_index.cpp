


int insertElement(int arr[], int n, int x, int capicity, int pos){
  if(n==capicity)
  return n;

  int index=pos-1;
  for(int i=n-1;i>=index;i--){
    arr[i+1]=arr[i];
  }  
  arr[index]=x;

  return (n+1);
}

// Time complexity - O(n)
// Time complexity - insert at the end O(1)
// Time complexity - insert at the beginning thetha(n)