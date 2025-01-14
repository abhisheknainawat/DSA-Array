// reverse a number
class Solution {
public:
    int reverse(int x) {
        long revno=0;
        while(x){
            long ld=x%10;
            revno=(revno*10)+ld;
            x=x/10;
        }
        if(revno>INT_MAX || revno<INT_MIN) return 0;
        return int (revno);

    }
};

//leetcode 2657

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<bool> seen(51, false);
        vector<int> ans;
        int common = 0;

        for (int i = 0; i < n; ++i) {
            if (seen[A[i]]) {
                ++common;
            } else {
                seen[A[i]] = true;
            }

            if (seen[B[i]]) {
                ++common;
            } else {
                seen[B[i]] = true;
            }

            ans.push_back(common);
        }

        return ans;
    }
};