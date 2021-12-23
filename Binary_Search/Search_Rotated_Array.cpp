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

int binary_Search(int arr[],  int key, int s, int e )
{
    int start = s;
    int end = e-1;
    int mid = start + (end - start)/2 ;
    // (start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2 ;
    }
    return -1;  // if not found 
}
 
int main()
{
  int arr[7]={6, 7, 1, 2, 3, 4, 5};
  
  int Target = 1;
  int size =7;
  int start =0;

  int pivot = bS_RotatedArray(arr,size);

  if(arr[pivot]<=Target<=arr[size-1])
  {
    cout<<binary_Search(arr, Target, pivot, size);
  }
  else 
  {
      cout<<binary_Search(arr, Target, start, pivot);
  }
  
  return 0;
      
}
