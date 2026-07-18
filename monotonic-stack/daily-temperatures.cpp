class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>change(temperatures.size(),0);
        stack<int>stack;
        for(int i=n-1;i>=0;i--){
            while(!stack.empty()&& temperatures[i]>=temperatures[stack.top()]){
                stack.pop();
            }
            if(!stack.empty()){
                change[i]=stack.top()-i;
            }
            stack.push(i);

        }
        return change;
    }
};