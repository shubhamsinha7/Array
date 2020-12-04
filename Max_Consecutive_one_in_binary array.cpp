class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int res=0;
        int cur=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                cur=0;
            }
            else
            {
                cur++;
                res=max(res,cur);
            }
        }
        return res;
    }
};