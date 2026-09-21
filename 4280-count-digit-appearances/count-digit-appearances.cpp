class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        string s;
        for(int i=0;i<nums.size();i++)
        {
   s += to_string(nums[i]);        }
    int count=0;
        for(char c : s) {
         if(c == digit + '0') {
        count++;
    }
}
return count;
    }
};