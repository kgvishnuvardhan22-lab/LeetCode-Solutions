class Solution {
int add(int num){
    int sum=0;
    if(num<=9) return num;
    while(num!=0){
        sum=(sum)+num%10;
        num=num/10;
        }
        return sum;
}
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=add(nums[i]);
        }
       sort(nums.begin(),nums.end());
 return nums[0];
    }
};