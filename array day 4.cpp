// plus one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();//size of array
        for (int i=n-1;i>=0;i--){
            if (digits[i]==9){
                digits[i]=0;
            }//increasing the size of the arraay
            else{
                digits[i]++;
                return digits;
            }//for rest of the cases
            
        }
        digits.insert(digits.begin(),1);//to add 1 box in the starting of the array 
        return digits;
        
    }
};

//counting words with s given prefix

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = words.size();
        int count =0;
        for (int i=0;i<n;i++){
            if(words[i].substr(0, pref.size()) == pref){
                count ++;
            }
        }
        return count;
        
    }
}


//end of day 4