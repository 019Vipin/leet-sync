class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxE=INT_MIN;
        for(int i=0;i<n;i++){
            maxE=max(maxE,nums[i]);
            int minE=INT_MAX;
            for(int j=i;j<n;j++){
              minE=min(minE,nums[j]);  
            }
            if((maxE-minE)<=k) return i;
        }
        return -1;
    }
};