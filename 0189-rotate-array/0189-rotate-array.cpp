class Solution {
public:
    void rotate(vector<int>& arr, int k) {
       int n=arr.size();
         k=k%n;
         int i=0;
   int j=n-1;
   while(i<j){
       swap(arr[i],arr[j]);
       i++;
       j--;
   }
   i=0;
   j=k-1;
   while(i<j){
       swap(arr[i],arr[j]);
       i++;
       j--;
   }
   i=k;
   j=n-1;
   while(i<j){
       swap(arr[i],arr[j]);
       i++;
       j--;
   }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
    }
};
