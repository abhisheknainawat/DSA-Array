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

//longest palindromic substring
class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.length() <= 1) {
            return s;
        }
        
        int max_len = 1;
        std::string max_str = s.substr(0, 1);
        
        for (int i = 0; i < s.length(); ++i) {
            for (int j = i + max_len; j <= s.length(); ++j) {
                if (j - i > max_len && isPalindrome(s.substr(i, j - i))) {
                    max_len = j - i;
                    max_str = s.substr(i, j - i);
                }
            }
        }

        return max_str;
    }

private:
    bool isPalindrome(const std::string& str) {
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            ++left;
            --right;
        }
        
        return true;
    }
};