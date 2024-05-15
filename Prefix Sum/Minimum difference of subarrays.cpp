#include <bits/stdc++.h>
int minimumDifference(int n, vector<int> arr)
{
    // Write your code here.
    int prefixSum[n];
    int suffixSum[n];
    prefixSum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }
    suffixSum[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffixSum[i]=suffixSum[i+1]+arr[i];
    }
    int diff=INT_MAX;
    for(int i=0;i<n-1;i++){
        int res=abs(suffixSum[i+1]-prefixSum[i]);
        diff=min(res,diff);
    }
    return diff;
}
