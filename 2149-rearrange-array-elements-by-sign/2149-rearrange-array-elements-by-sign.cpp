class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> ans(arr.size(),0);
        int posindex=0; int negindex=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                ans[negindex]=arr[i];
                negindex+=2;
            }
            else{
                ans[posindex]=arr[i];
                posindex+=2;
            }
        }
        return ans;
    }
};