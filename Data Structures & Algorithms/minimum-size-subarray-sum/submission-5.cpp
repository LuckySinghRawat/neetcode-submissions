class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0,mini = INT_MAX;
        int j = 0;
        for(int i = 0;i < nums.size(); i++){
            sum += nums[i];
            if(sum >= target){
                while(sum - nums[j] >= target){
                    sum -= nums[j++];
                }
                    mini = min(mini,i - j + 1);
            }
        }

        if(target > sum)return 0;
        return mini;
    }
};