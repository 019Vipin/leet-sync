class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>res;
        vector<bool>pre(upper+1,false);
        for(int x:nums){
            if(x>=lower && x<=upper){
                pre[x]=true;
            }
        }
        int i=lower;
        while(i<=upper){
            if(pre[i]){
                i++;
                continue;
            }
            int start=i;
            while(i<=upper && !pre[i]){
                i++;
            }
            int end=i-1;
            res.push_back({start,end});
        }
        return res;
    }
};