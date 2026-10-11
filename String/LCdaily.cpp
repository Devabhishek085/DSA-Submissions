class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();

        int prod=1;
        int ans=0;

        for(int i=0;i<n;i++){
            if(n%(i+1)==0){
                prod=nums[i]*nums[i];
                ans=ans+prod;
            }
        }
        return ans;
    }
};