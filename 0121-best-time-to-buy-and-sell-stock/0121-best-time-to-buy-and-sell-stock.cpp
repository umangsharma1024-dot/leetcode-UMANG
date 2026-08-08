class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int profit=0;
       int mini=arr[0];
       for(int i=1;i<arr.size();i++){
        profit=max(profit,arr[i]-mini);
        mini=min(mini,arr[i]);
       }
        return profit;
    }
   
};