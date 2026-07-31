class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>preSumCnt;
        int prefixSum=0;
        int count=0;
        preSumCnt[0]=1;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            int badDiff=prefixSum-k;
            if(preSumCnt.find(badDiff)!=preSumCnt.end()){
                count+=preSumCnt[badDiff];
            }
            preSumCnt[prefixSum]++;
        }
        return count;

    }
};