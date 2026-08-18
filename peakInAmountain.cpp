class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int mx=arr[0];
        int index=0;
        for(int i=0;i<n;i++){
            if(mx<arr[i]){
                mx=arr[i];
                index++;
            }
        }
        return index;
    }
};