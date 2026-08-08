class Solution {
public:
int kadanesMax(vector<int>& nums,int n){
    int x;
     x=nums[0];
    int maxsofar=x;
    for(int i=1;i<n;i++){
        x=max(x+nums[i],nums[i]);
        maxsofar=max(maxsofar,x);
    }
    return maxsofar;
}
int kadanesMin(vector<int>&nums,int n){
    int x;
     x=nums[0];
    int minsofar=x;
    for(int i=1;i<n;i++){
        x=min(x+nums[i],nums[i]);
        minsofar=min(minsofar,x);
    }
    return minsofar;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(begin(nums),end(nums),0);
        int minsum=kadanesMin(nums,n);
        int maxsum=kadanesMax(nums,n);
        int circularsum=sum-minsum;
        if(maxsum>0){
            return max(maxsum,circularsum);
        }
        return maxsum;
    }
};