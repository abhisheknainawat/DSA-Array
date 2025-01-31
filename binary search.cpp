//leetcode 704
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) s=m+1;
            else e=m-1;

        }
        return -1;
        
    }
};

//leetcode 35 search insertion position

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) s=m+1;
            else e=m-1;

        }
        return -1;
        
    }
};

//leetcode 34

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);
        result[0] = left;
        result[1] = right;
        return result;        
    }

    int binarySearch(vector<int>& nums, int target, bool isSearchingLeft) {
        int left = 0;
        int right = nums.size() - 1;
        int idx = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                idx = mid;
                if (isSearchingLeft) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        
        return idx;
    }    
};