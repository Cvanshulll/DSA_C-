#include<iostream>
using namespace std;

void  bubbleSort(int arr[], int n )
{
    for(int i =1; i<n; i++)
    {
        bool f = false;
        
        for(int j =0; j<n-i; j++)
        {
            f = true;
            if(arr[j]>arr[j+1])
               swap(arr[j],arr[j+1]);  // Worst case -> TC : O(n*n)
        }
        if(f == false)
        {
            break;     // Best case -> TC : O(n)
        }
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

   bubbleSort(arr,n);

   for(auto &x:arr)
   {
     cout<<x<<" ";
   }
}