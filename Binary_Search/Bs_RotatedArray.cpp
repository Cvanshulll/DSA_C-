#include<bits/stdc++.h>  ///iostream 
using namespace  std;


int bS_RotatedArray(int arr[], int size )
{
  int start =0;
  int end = size-1;
  int mid = start + (end - start)/2;
  while(start<end)
  {
    if(arr[0]<=arr[mid])
    {
      start = mid +1 ;
    }
    else 
    {
      end = mid;
    }
    mid = start + (end - start)/2;
  }
  return start ;
}
 
int main()
{
  int arr[7]={6, 7, 1, 2, 3, 4, 5};

  int ans = bS_RotatedArray(arr,7);
  cout<<"Index of the pivot element : "<<ans<<endl;

  return 0;
      
}
