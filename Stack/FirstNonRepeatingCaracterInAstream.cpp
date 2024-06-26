//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		   map<char,int>mp;
		   queue<char>q;
		   string v="";
		   for(int i=0;i<A.size();i++){
		       char ch=A[i];
		       mp[ch]++;
		       q.push(ch);
		       while(!q.empty()){
		           if(mp[q.front()]>1){
		               q.pop();
		           }
		           else{
		               v.push_back(q.front());
		               break;
		           }
		       }
		       if(q.empty()){
		           v.push_back('#');
		       }
		   }
		   return v;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends