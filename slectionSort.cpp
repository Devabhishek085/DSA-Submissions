class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n-1;i++){
            int mn=i;
            for(int j=i+1;j<n;j++){
                if(arr[mn]>arr[j]){
                    swap(arr[mn],arr[j]);
                }
            }
        }
    }
};