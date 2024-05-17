class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        map<int,int>mp;
        for(int i=0;i<barcodes.size();i++){
            mp[barcodes[i]]++;

        }
        if(barcodes.size() == 1 || barcodes.size() == 0)
            return barcodes;
        priority_queue<pair<int,int>>pq;
        vector<int>reArrange;
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        while(pq.top().first>0){
            int top1=pq.top().first;
            int topEle1=pq.top().second;
            reArrange.push_back(pq.top().second);
            pq.pop();
            int top2=pq.top().first;
            int topEle2=pq.top().second;
            pq.pop();
            top1--;
            if(top2>0){
                reArrange.push_back(topEle2);
                top2--;
            }
            
            
            pq.push({top1,topEle1});
            pq.push({top2,topEle2});
            if(reArrange.size()==barcodes.size())
            break;
        }
        return reArrange;
    }
};
