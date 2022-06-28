class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int f0 = 0, f1 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0') f1 += 1;
            else{
                f1 = min(f0, f1);
                f0+=1;
            }
        }
        
        return min(f0, f1);
    }
};
