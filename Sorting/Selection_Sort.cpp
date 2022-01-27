#include<iostream>
using namespace std;

int  selectionSort(int arr[], int n )
{
    for(int i =0; i<n; i++)
    {
        int minIndex = i;
        for(int j =i+1; j<n; j++)
        {
            if(arr[j]<minIndex)
               minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
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
   selectionSort(arr,n);
}