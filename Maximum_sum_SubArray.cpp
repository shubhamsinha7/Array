class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        int temp=nums[0];
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        for(int i=1;i<n;i++)
        {
            temp=max(temp+nums[i],nums[i]);
            res=max(temp,res);
        }
        return res;
        
    }
};