class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> seen(arr.begin(), arr.end());
        int sum = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1] + 1) sum += arr[i];
            else break;
        }

        while (seen.count(sum))
            sum++;

        return sum;
    }
};