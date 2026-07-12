class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt = 0,sum = 0;

        int j = 0;
        for(int i = 0;i < arr.size(); i++){
            if(i - j == k ){
                if(sum/k >= threshold)cnt++;
                sum -= arr[j++];
            }
            sum += arr[i];
        }
        if(sum/k >= threshold)cnt++;

        return cnt;
    }
};