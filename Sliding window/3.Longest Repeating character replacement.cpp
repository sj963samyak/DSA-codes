//The code is written by samyak jain
// The logic behind the code is
//len-maxf<=k then proceed with the window else shrink the window
//upgrade the map and its count if it is greator than 

class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxf=INT_MIN;
        int hash[26]={0};
        int maxLen=INT_MIN;
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            while(r-l+1-maxf>k){
                hash[s[l]-'A']--;
                maxf=0;
                l++;
                for(int i=0;i<26;i++)
                maxf=max(maxf,hash[i]);
            }
            if(r-l+1-maxf<=k){
                maxLen=max(maxLen,r-l+1);
            }
            r++;
        }       
        return maxLen; 
    }
};
