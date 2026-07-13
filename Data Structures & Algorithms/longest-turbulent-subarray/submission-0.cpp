class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int maxTurbulent = 1, currLen = 0;
        int prevSign = 0;
        for(int i = 1; i < arr.size();i++){
            if( arr[i-1] < arr[i] ){
                currLen = (prevSign == 1)? currLen + 1: 2;
                prevSign = -1;
            }else if(arr[i] < arr[i-1]){
                currLen = (prevSign == -1)? currLen + 1: 2;
                prevSign = true;
            }
            else{
                currLen = 0;
                prevSign = 0;
            }
            maxTurbulent = max(maxTurbulent,currLen);

        }
        return maxTurbulent;
    }
};