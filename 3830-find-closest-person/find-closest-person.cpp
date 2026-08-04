class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1=abs(z-x), p2=abs(z-y);
        if(p1==p2) return 0;
        if(p1<p2) return 1;
        else return 2;
    }
};