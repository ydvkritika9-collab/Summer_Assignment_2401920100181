class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1 != n2){
            return false;
        }
        int freq[26]={0};
        for(char ch : s){
            freq[ch-'a']++;
        }
        for(char ch : t){
            freq[ch-'a']--;
            if(freq[ch-'a']<0){
                return false;
            }
            
        }
        return true;
    }
};
