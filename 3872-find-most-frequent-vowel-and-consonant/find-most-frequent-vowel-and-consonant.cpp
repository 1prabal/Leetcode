class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'||s[i]=='u'||s[i]=='e'||s[i]=='i'||s[i]=='o'){
                m1[s[i]]++;
            }else{
                m2[s[i]]++;
            }
        }
        int max1=0, max2=0;
        for(auto &i : m1){
            max1 = max(max1, i.second);
        }
        for(auto &i : m2){
            max2 = max(max2, i.second);
        }
        return max1+max2;
    }
};