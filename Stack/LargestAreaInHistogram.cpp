 #include <bits/stdc++.h>
 vector<int>nextSmaller(vector<int>&heights,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n,0);
    for(int i=n-1;i>=0;i--){
      int curr=heights[i];
      while (s.top()!=-1 && heights[s.top()] >= curr) {
        s.pop();
      }
      ans[i]=s.top();
      s.push(i);  
    }
    return ans;
 }
 vector<int>prevSmaller(vector<int>&heights,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
      int curr=heights[i];
      while (s.top()!=-1 && heights[s.top()] >= curr) {
        s.pop();
      }
      ans[i]=s.top();
      s.push(i);  
    }
    return ans;
 }
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   int n=heights.size();
    vector<int>next(n,0);
    vector<int>prev(n,0);
    next=nextSmaller(heights, n);
    prev=prevSmaller(heights, n);
    int area=INT_MIN;
    for(int i=0;i<n;i++){
      int l=heights[i];
      if(next[i]==-1)
        next[i]=n;
      int b=next[i]-prev[i]-1;
      area=max(area,l*b);
    }
    return area;
 }