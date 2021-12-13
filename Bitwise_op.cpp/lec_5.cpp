#include<iostream>
using namespace std; 

int main()
{
    // int a =4;
    // int b =6;
    // cout<<"a&b "<<(a&b)<<"\n";
    // cout<<"a|b "<<(a|b)<<"\n";
    // cout<<"a^b "<<(a^b)<<endl;
    // cout<<"~a "<<~a<<endl;
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i =1; i<=n ; i++)
    {
        cin>>a[i];
    }
    int v[n];
    int j =0;
    int h = n-k;
    for(int i = h; i<=n;i++)
    {
        v[j]=a[i];
        j++;
    }
    for(int i =1; i<=k ;i++)
    {
        v[j]=a[i];
    }
    for(int i =1; i<=n ;i++)
    {
        cout<<v[i];
    }
    
}