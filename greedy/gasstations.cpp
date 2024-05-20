    class Solution {
    public:
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            int sumOfDiff=0;
            int n=gas.size();
            for(int i=0;i<n;i++){
                sumOfDiff+=gas[i]-cost[i];
            }
            if(sumOfDiff<0)
                return -1;
            int start=0;
            int diff=0;
            for(int i=0;i<n;i++){
                diff+=gas[i]-cost[i];
                if(diff<0){
                    start=i+1;
                    diff=0;
                }
            }
            return start;              
        }
    };