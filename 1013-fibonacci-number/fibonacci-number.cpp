class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;
        int f1=0;
        int f2=1;
        int f3=0;
        {
            for(int i=0;i<n-1;i++){
                f3=f1+f2;
                f1=f2;
                f2=f3;
            }
            return f3;
        }
    }
};