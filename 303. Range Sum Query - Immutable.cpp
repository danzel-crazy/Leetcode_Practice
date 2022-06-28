class NumArray {
public:
    NumArray(vector<int>& nums) {
        int size = nums.size();
        if(nums.size() == 0) return;
        arraysum.push_back(nums[0]);
        for(int i = 1 ; i < size; i++){
            arraysum.push_back(nums[i] + arraysum[i - 1]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return arraysum[right];
        }
        else{
            return arraysum[right] - arraysum[left - 1];
        }
    }
private: 
    vector <int> arraysum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
