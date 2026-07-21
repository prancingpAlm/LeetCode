class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ex_or=0;
        for(int i=0;i<n;i++){
            ex_or=ex_or ^ nums[i];
        }
        return ex_or;
    }
};