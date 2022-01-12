#include<bits/stdc++.h>
using namespace std;

bool isPossible(int n , int m, int arr[], int mid)
{
    int sumPages =0;
    int stud_C = 1;
    for(int i =0; i<n; i++)
    { 
        if(sumPages+arr[i]<=mid)
        {
            sumPages += arr[i];
        }
        else 
        {
            stud_C++;
            if(stud_C>m || arr[i]>mid)
            {
                return false;
            }
            // sumPages =0;
            sumPages = arr[i];
        }
    }
    return true;
}

long long  book_allocation(int n , int m , int arr[])
{
    int s =0; 
    int sum =0, ans =-1;
    for (int i =0; i<n; i++)
    {
        sum+=arr[i];
    }
    int e = sum ;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(n, m, arr, mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans ;
}

// main code 
int main()
{
    int n,m;

    cout<<"Enter the number of books: ";
    cin>>n;
    cout<<"\nEnter the number of students: ";
    cin>>m;
    cout<<"\nEnter noo. of pages of each book: ";
    int a[n];
    for(int i =0; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<"Answer is : "<<book_allocation(n,m,a);
  
    return 0;
}
