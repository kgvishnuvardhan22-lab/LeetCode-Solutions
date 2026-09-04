class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            result.push_back(nums[i]);
        }
        for(int i=0;i<size;i++)
        {
            result.push_back(nums[i]);
        }
       return result;
    }
};