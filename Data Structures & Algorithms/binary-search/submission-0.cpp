class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(binary_search(nums.begin(),nums.end(),target)) {
            for(int i =0; i < nums.size() ; i++) {
                if(nums[i] == target) return i;
            }
        }
        return -1;
    }
};
