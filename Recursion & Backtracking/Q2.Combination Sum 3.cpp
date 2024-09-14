class Solution {
public:
    void combSum3(int ind,int k,int sum,vector<vector<int>>&ans,vector<int>&ds){
        if(k==0 && sum==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<=9;i++){
            ds.push_back(i);
            combSum3(i+1,k-1,sum-i,ans,ds);
            ds.pop_back();

        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        combSum3(1,k,n,ans,ds);
        return ans;
    }
};
