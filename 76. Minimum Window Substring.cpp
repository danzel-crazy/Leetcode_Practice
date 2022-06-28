class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "";
        unordered_map <char, int> a;
        
        for(char s : t){
            a[s]++;
        }
        
        
        int l = 0, count = 0, minlen = INT_MAX;
        for(int i = 0 ; i < s.size(); i++){
            if(--a[s[i]] >= 0) count++;
            while(count == t.size()){
                if(minlen > i - l + 1){
                    minlen = i - l + 1;
                    ans = s.substr(l, minlen);
                }
                
                if (++a[s[l]] > 0) --count;
                ++l;
            }
        }
        
        return ans;
    }
};
