class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // unordered_set<int> freq;
        // for(int i = 0;i < nums.size() ; i++){
        //     if(freq.count(nums[i]) > 1)return true;

        //     freq.insert(nums[i]);
        //     if(freq.size() > k)freq.erase(nums[i-k]);
        // }
        // return false;
        unordered_set<int> window;
        for (int i = 0; i < nums.size(); i++) {
            if (window.count(nums[i]))
                return true;
            window.insert(nums[i]);
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};