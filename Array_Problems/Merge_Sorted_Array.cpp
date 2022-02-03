class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // for(int i=m; i<m+n; i++)
        // {
        //    nums1[i] = nums2[i-m]; // i-m == m-m
        // }
        // sort(nums1.begin(), nums1.end());   // O(NlogN)
        
        
        // O(m+n)
        
/*     
        a = [a1, a2, a3(i), 0, 0, 0(tot)]    // m = 3
            
        b = [b1, b2, b2(j)]        // n =3         
*/
            
        int e1 = m-1,e2=n-1;
        int tot = m+n-1;
        
        while(e1>=0 && e2>=0)
        {
            if(nums1[e1]>nums2[e2])
            {
                nums1[tot]=nums1[e1];
                e1--;
                tot--;
            }
            else
            {
                nums1[tot]=nums2[e2];
                e2--;
                tot--;
            }
            
        }
        
        while(e1>=0)
        {
            nums1[tot]=nums1[e1];
            e1--;
            tot--;
        }
        
        while(e2>=0)
        {
            nums1[tot]=nums2[e2];
            e2--;
            tot--;
        }
        
    }
};

 
