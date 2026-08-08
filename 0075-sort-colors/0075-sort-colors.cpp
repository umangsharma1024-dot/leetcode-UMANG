class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
       int low=-1;
       int mid= 0;
       int high=n;
       while(mid<high){
        if(arr[mid]==0){
            low++;
            swap(arr[low],arr[mid]);
            mid++;
        }
        else if(arr[mid]==1){
                mid++;
            }
else{
    high--;
    swap(arr[mid],arr[high]);
}
        
       }
       for(int i=0;i<n;i++){
        cout<<arr[i];
       }
    }
};