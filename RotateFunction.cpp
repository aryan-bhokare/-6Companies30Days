class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int n = nums.size();
        int sum=0, fn=0 ,newfn=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            fn+= i*nums[i];
        }
        int dp[n];
        dp[0]=fn;
        newfn=dp[0];
        for(int i=1;i<n;i++){
            dp[i]=dp[i-1]+sum-(n*nums[n-i]);
            newfn= max(newfn,dp[i]);
        }
        return newfn;  
        
    }
};
