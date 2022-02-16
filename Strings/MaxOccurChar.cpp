   // </      https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1    >

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]={0};
         int no = 0;
        for(int i =0; i<str.size(); i++)
        {
            char ch = str[i];
           
            no = ch-'a';
            arr[no]++;
            
        }
        int maxi = INT_MIN,ans =-1;
        for(int i =0; i<26; i++)
        {
            if(maxi<arr[i])
            {
                ans =i;
                maxi =arr[i];
            }
        }
        
        char res = 'a'+ans;
        return res;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends
