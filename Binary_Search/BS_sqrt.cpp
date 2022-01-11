// 69. Sqrt(x)

#include<bits/stdc++.h>
using namespace std;

long long binarySearch_sqrt(int n)
{
    int s =0;
    int e = n;
    long long  mid = s+(e-s)/2;
    long long ans = -1;
    while(s<=e)
    {
        long long sqrt = mid*mid ;
        if(sqrt == n)
        {
            return mid;
        }
        else if(sqrt>n)
        {
            e = mid-1;
        }
        else 
        {
            ans = mid;
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double morePrecise(int n , int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for(int i =0; i<precision; i++)
    {
        factor = factor/10;

        for(double j=ans; j*j<n; j+=factor)
        {
            ans =j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter no : ";
    cin>>n;
    int tempsol = binarySearch_sqrt(n);
    cout<<tempsol<<'\n';
    cout<<"Answer is : "<<morePrecise(n,2,tempsol);
    return 0;
}
