class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        map <char, int> check;
        int left = 0, right = 0;
        for(;right < s.size();right++){
            if(check[s[right]] == 0){
                check[s[right]] = right+1;
                
            }
            else{
                if((right - left ) > max){
                    max = right - left ;
                    cout << max << endl;
                }
                if(left < check[s[right]]){
                   left = check[s[right]]; 
                }
                check[s[right]] = right+1;
            }
        }
        if((s.size() - left + 1) > max){
            max = s.size() - left ;
            cout << max << endl;
        } 
        return max;
    }
};
