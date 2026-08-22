class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        long long mid=(s+e)/2;
        while(s<=e){
            if(target==nums[mid]){
                return mid;
            }
            if(target>nums[mid]){
                s=mid+1;
            }
            if(target<nums[mid]){
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return s;
    }
};