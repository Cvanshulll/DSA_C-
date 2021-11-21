#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int arr1[q];
    for(int i =0; i<q ; i++)
    {
        cin>>arr1[i];
    }
    int f = 0;
    int l = 0;
    for(int i=0; i<q; i++)
    {
        for(int j =0; j<n ; j++)
        {
            f++;
            if(arr[j]==arr1[i])
            {
                break;
            }
        }
    }

    for(int i=n; i>=0; i--)
    {
        for(int j =n; j>=0 ; j--)
        {
            l++;
            if(arr[j]==arr1[i])
            {
                break;
            }
        }
    }

    cout<<f<<" "<<l<<'\n';
}