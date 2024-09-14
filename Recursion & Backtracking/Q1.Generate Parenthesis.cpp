//open == close at the start
//
class Solution {
public:
    vector<string>ans;
    void generate(string &s,int open,int close){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        if(open>0){
            s.push_back('(');
            generate(s,open-1,close);
            s.pop_back();
        }
        if(close>0){
          //open < close this statement is written in reverse as open consume is counted as open so it is written in reverse order.
            if(open<close){
                s.push_back(')');
                generate(s,open,close-1);
                s.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        generate(s,n,n);
        return ans;
    }
};
