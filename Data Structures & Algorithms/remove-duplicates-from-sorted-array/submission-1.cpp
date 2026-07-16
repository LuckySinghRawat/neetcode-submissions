class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int j = 0;
        for(int i = 1; i < size;i++){
            if(nums[j]<nums[i]){
                nums[++j] = nums[i];
            }
        }
        return j+1;
    }
};

/*
index 0 1 2 3 4
      | | | | |
i=1-> 1 1 2 3 4
i=2-> 1 2 2 3 4
i=3-> 1 2 3 3 4
i=4-> 1 2 3 4 4
*/