class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            auto it = m.find(nums[i]);
            if (it != m.end()) {
                int mapValue = it->first;
                int mapIndex = it->second;
                if (abs(i - mapIndex) <= k) {
                    return true;
                }
                m[nums[i]] = i;
            }
            m.insert({nums[i], i});
        }
        return false;
    }
};