class Solution {
public:
    int findClosest(int x, int y, int z) {

        int alice = abs(x - z);
        int bob = abs(y - z);

        if(alice < bob)
            return 1;

        if(bob < alice)
            return 2;

        return 0;
    }
};