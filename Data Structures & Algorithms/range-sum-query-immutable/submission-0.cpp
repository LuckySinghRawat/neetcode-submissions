class NumArray {
public:
    vector<int> ps;
    NumArray(vector<int>& nums) {
        ps.resize(nums.size());
        int sum = 0,j = 0;
        for(int i : nums){
            sum += i;
            ps[j++] = sum;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)return ps[right];
        return ps[right] - ps[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */