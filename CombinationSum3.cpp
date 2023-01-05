class Solution {
public:
    void helper(int i, int n,int k,int sum, vector<vector<int>>& res,vector<int> ds){
        if(sum>n) return;
        if(k==0){
            if(sum == n){
            res.push_back(ds);
            }
            return;
        }
        if(i>9) return;
    
        
            ds.push_back(i);
            sum+=i;
            helper(i+1,n,k-1,sum,res,ds);
            sum-=i;
            ds.pop_back();
            
        
            helper(i+1,n,k,sum,res,ds);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> ds;
        helper(1,n,k,0,res,ds);
        return res;
    }
};
