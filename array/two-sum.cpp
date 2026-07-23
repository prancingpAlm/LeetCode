class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target){
        int n = arr.size();
        vector<pair<int, int>> stored;
        for (int i = 0; i < n; i++) {
            stored.push_back({arr[i], i});
        }
        sort(stored.begin(), stored.end());

        int left = 0, right = n - 1;
        while (left < right) {
            int sum = stored[left].first + stored[right].first;
            if (sum == target) {
                
                return {stored[left].second, stored[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {-1, -1};  // No pair found
    }
};