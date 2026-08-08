class Solution {
public:
    int countSubstrings(string s) {
        int cnt=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        int j=0;
        while(i-j>=0 and i+j<n and s[i-j]==s[i+j]){
            cnt++;
            j++;
        }
    }
     for(double i=0.5;i<n;i++){
        double j=0.5;
        while(i-j>=0 and i+j<n and s[static_cast<int>(i-j)]==s[static_cast<int>(i+j)]){
            cnt++;
            j++;
        }
    }
    return cnt;
    }
};