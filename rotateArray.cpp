class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> v;
        k = k%n;
        
       

        
            for(int i=n-(k); i<n; i++){
            
            v.push_back(nums[i]);
        
            }
        
            for(int i=0; i<(n-k); i++){
              nums[(n-1-i)] = nums[(n-1-k-i)];
            }
        
            for(int i=0; i<k; i++){
                nums[i]= v[i];
            }
        
        
    }
};
