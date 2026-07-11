class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = 0,size = nums.size();
        int initial = 0;
        for(int i = 0; i < 2*size;i++ ){
            if(i != 0  && i%size == initial){
                currSum += nums[i%size];
                while(initial <= i){
                    currSum -= nums[initial%size];
                    initial++;
                    maxSum = max(maxSum,currSum);
                }
                break;
            }
            if(currSum<0){
                currSum = 0;
                initial = i;
            }
            currSum += nums[i%size];
            maxSum = max(maxSum,currSum);
        }
        return maxSum;
    }
};