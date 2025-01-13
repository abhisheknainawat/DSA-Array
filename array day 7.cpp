//letcode -- 3223 Minimum Length of String After Operations

class Solution {
public:
    int minimumLength(string s) {
        vector <int>freq(26);
        for (int i=0;s[i];++i)
            freq[s[i]-'a']++;
        
        int length=0;
        for (int i=0;i<26;i++){
            if(freq[i]&1)   length+=1;
            else            length+=min(2,freq[i]);
        }
        return length;
    }
};