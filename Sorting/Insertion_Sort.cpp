#include<iostream>
using namespace std;

void  insertionSort(int arr[], int n )
{
    int j;
    for(int i =1;i<n; i++)
    {
      int temp = arr[i];
      for(j =i-1; j>=0; j--)
      {
        if(arr[j]>temp)
        {
          arr[j+1]=arr[j];
        }
        else 
        {
          break;
        }
      }
      arr[j+1]=temp;
    }
}

int main()
{
    int n ;
    cin>>n;
   int arr[n];
   for(auto &x: arr)
   {
       cin>>x;
   }

   insertionSort(arr,n);

   for(auto &x:arr)
   {
     cout<<x<<" ";
   }
}


