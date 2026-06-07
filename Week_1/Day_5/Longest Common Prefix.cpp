class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string end=strs[n-1];
        
        int len=min(first.size(),end.size());
        for(int i=0;i<len;i++){
            if(first[i]==end[i]){
                ans=ans+first[i];
            }
            else{
                break;
            }

    
        }
        return ans;
    }

};
