class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0;
        int index, new_index;
        for(int i = 0; i < nums.size(); i++){
            index=i;
            int l = 0; 
            while(nums[index]!=-1){
                new_index = nums[index];
                nums[index] = -1;
                index = new_index;
                l++;
            }
            ans = max(ans,l);
        }
        return ans;
    }
};
