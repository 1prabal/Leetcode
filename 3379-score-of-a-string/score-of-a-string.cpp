class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0; i<s.size()-1; i++){
            int a = 0;
            a = abs(s[i+1] - s[i]);
            sum += a;
        }
        return sum;
    }
};