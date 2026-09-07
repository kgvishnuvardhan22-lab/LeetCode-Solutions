class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int i=0;
        for(i=0;i<nums.size();i++){
        
            if(i%2==0) 
            {sum+=nums[i];}
        else
        {
            sum=sum-nums[i];
        }
        
        }
                return sum;
    }
};