//
class Solution {
public:
    int countOfSubarraysWithGoal(vector<int>&nums,int goal){
        int l=0,r=0,sum=0,cnt=0;
        if(goal<0)return 0;
        while(r<nums.size()){
            sum+=nums[r];
            while(l<=r&&sum>goal){
                sum=sum-nums[l];
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=countOfSubarraysWithGoal(nums,goal)-countOfSubarraysWithGoal(nums,goal-1);
        return ans;
    }
};
