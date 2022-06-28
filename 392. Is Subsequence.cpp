class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for(int j = 0; j < t.size(); j++){
            if(t[j] == s[i]){
                i++;
            }
            if(i == s.size()) return true;
        }
        if(i < s.size()) return false;
        else return true;
    }
};
