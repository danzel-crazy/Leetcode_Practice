class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size() == 0) return -1;
        int sum = 0;
        int left = 0;
        for(int i : nums) sum += i;
        for(int i = 0; i < nums.size(); i++){
            if(left == sum-left-nums[i]){
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};
