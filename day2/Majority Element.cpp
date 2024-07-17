class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int cand=0;
        for(int i=0; i<nums.size();++i)
        {
            if(count==0)
            {
                cand=nums[i];
                count=1;
            }
            else if(nums[i]==cand)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        count=0;
        for(int num : nums)
        {
            if(num == cand)
            {
                count++;
            }
        }
        
        return cand;
    }
};