class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int maxtemp=nums[0];
        int mintemp=nums[0];
        if(nums.size()==0)
        {
            return 0;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                swap(maxtemp,mintemp);
            }
            maxtemp=max(maxtemp*nums[i],nums[i]);
            mintemp=min(mintemp*nums[i],nums[i]);
            
            res=max(maxtemp,res);
        }
        return res;
        
    }
};