#include<iostream>
using namespace std;

void reverseArray(int arr[],int n)
{     
   int i =0; int j = n-1;
   while(i<=j)
   {
       swap(arr[i++],arr[j--]);
    //   i++;
    //   j--;
   }
    // return arr;
   
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

  reverseArray(arr, n);
  
   for(auto &x:arr)
   {
     cout<<x<<" ";
   }
}


