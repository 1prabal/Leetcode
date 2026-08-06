class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<n+10; i++){
            int a = i;
            int product = 1;
            while(a!=0){
                int digit = a%10;
                product *= digit;
                a/=10;
            }
            if(product % t==0){
                return i;
                break;
            }
        }
        return 0;
    }
};