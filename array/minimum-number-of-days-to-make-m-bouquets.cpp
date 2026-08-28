class Solution {
public:
    bool possibility(vector<int>&bloomDays,int day,int m,int k){
        int n=bloomDays.size();
        int cnt=0;
        int bouq=0;
        for(int i=0;i<n;i++){
            if(bloomDays[i]<=day){
                cnt++;
                if(cnt==k){
                    bouq++;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }
        return bouq>=m;
    }
    int minDays(vector<int>& bloomDays, int m, int k) {
        long long total=m*k;
        if(total>bloomDays.size())return -1;
        int mini=*min_element(bloomDays.begin(),bloomDays.end());
        int maxi=*max_element(bloomDays.begin(),bloomDays.end());
        int low=mini,high=maxi;
        int result=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if (possibility(bloomDays,mid,m,k)){
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
};