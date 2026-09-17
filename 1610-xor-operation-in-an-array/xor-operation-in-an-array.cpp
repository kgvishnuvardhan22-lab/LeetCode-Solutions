class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[10000];
        int count=0;
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        for(int i=0;i<n;i++){
            count^=nums[i];
                    }
                    return count;
    }
};