class Solution {
public:

    void revArray(vector<int>&nums,int start,int end){
        while (start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }

    vector<int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0||k==0){
            return nums;
        }
        k=k%n;
        revArray(nums,0,n-1);
        revArray(nums,0,k-1);
        revArray(nums,k,n-1);
        return nums;
    }
};