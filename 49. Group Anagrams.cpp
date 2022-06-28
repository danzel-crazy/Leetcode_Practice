class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> temp;        
        for(string str : strs){
            string t;
            t = str;
            sort(t.begin(), t.end());
            if(!temp.count(t)){
                temp[t] = ans.size();
                ans.push_back({}); 
            }
            ans[temp[t]].push_back(str);
        }
        
        
        return ans;
    }
};
