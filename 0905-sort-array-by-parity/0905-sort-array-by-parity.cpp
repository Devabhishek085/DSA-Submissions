class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();

        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                ans.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};