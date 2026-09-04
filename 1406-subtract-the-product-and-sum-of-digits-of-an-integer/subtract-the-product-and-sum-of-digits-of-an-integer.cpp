class Solution {
public:
    int subtractProductAndSum(int n) {
        int b=1;
        int c=1;
        int d=0;
        while(n!=0){
            b=n%10;
            c*=b;
            d+=b;
            n=n/10;
        }
        int f=c-d;
        return f;
    }  // <-- ADDED: closes the function
};   // <-- closes the class