class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = nums[0],minSum = INT_MAX;
        int currMax = 0,currMin = 0,size = nums.size();
        
        int sum = accumulate(nums.begin(),nums.end(),0);

        for(int i = 0;i < size; i++){
            currMax = max(currMax + nums[i],nums[i]);
            currMin = min(currMin + nums[i],nums[i]);

            maxSum = max(maxSum,currMax);
            minSum = min(minSum, currMin);
        }

        if(maxSum > 0)return max(maxSum, sum - minSum);
        return maxSum;
    }
};