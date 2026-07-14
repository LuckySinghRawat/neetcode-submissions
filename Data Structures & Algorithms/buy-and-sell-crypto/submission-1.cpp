class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0,mini = prices[0];
        int j = 0;
        for(int i = 1; i< prices.size();i++){
            if(mini > prices[i]){
                mini = prices[i];
                j = i;
            }if(i > j && prices[i] > prices[j]){
                maxi = max(maxi,prices[i]-mini);
            }
        }

        return maxi;
    }
};
