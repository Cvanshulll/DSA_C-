#include<iostream>
using namespace std; 

int binary_Search(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
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
    
    int even[8] = {1,4,6,8,9,12,13,15}; // sorted array
    int odd[7] = {1,2,6,7,11,13,16};

    int even_ans = binary_Search(even, 8, 10);
    int odd_ans = binary_Search(odd, 7, 11);

    cout<<"Index of 10 from even array : " <<even_ans <<endl;
    cout<<"Index of 11 from even array : " <<odd_ans <<endl;

    return 0;
}