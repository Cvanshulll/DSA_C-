vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
     int l1 = n-1;
        int l2 = m-1;
        int carry =0;
        vector<int>v;
        while(l1>=0 && l2>=0)
        {
            int sum = a[l1]+b[l2]+carry;
            carry = sum/10;
            v.push_back(sum%10);
            l1--; l2--;
        }
       while(l1>=0)
       {
            int sum = a[l1]+carry;
            carry = sum/10;
            v.push_back(sum%10);
            l1--; 
       }
     while(l2>=0)
       {
            int sum = b[l2]+carry;
            carry = sum/10;
            v.push_back(sum%10);
            l2--; 
       }
    while(carry != 0)
    {
            int sum = carry;
            carry = sum/10;
            v.push_back(sum%10);
       }
    
        reverse(v.begin(),v.end());
        return v;
}
