class Solution {
public:
    int maxSubArray(vector<int>& nums) {
   int x;
   int n=nums.size();
     x=nums[0];
    int maxsofar=x;
    for(int i=1;i<n;i++){
        x=max(x+nums[i],nums[i]);
        maxsofar=max(maxsofar,x);
    }
    return maxsofar;
    }
};