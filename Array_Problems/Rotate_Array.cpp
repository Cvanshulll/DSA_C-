class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
        
        // right way 
     // k %= nums.size();
     //    reverse(nums.begin(),nums.end());
     //    reverse(nums.begin(),nums.begin()+k);
     //    reverse(nums.begin()+k,nums.end());
        
   
        
        //  int sz = nums.size();
        // vector<int> result(sz,0);
        // for(int i=0;i<sz;i++){
        //     result[(i + k)%sz] = nums[i];
        // }
        // nums = result;
        
      
      
        int n = nums.size();
        vector<int>temp(n,0);
        for(int i =0; i<n; i++)
        {
            temp[(i+k)%n]=nums[i];  
        // (n-1+k) rotate last element in this then,
        // we drive formula -> (i+k)%n coz n%n==0 so, 
        }
        nums=temp;
           
    }
};
