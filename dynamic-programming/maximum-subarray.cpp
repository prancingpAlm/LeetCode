class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int summ=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            summ+=nums[i];
            if(summ>maxi){
                maxi=summ;
            }
            if(summ<0){
                summ=0;
            }
        }
        return maxi;
    }
};