class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> val;
        for(int i =0;i<nums.size();i++) {
            for(int j = i + 1;j < nums.size();j++) {
                if(nums[i] + nums[j] == target) {
                    val.push_back(i);
                    val.push_back(j);
                }
            }
        }
        return val;
    }
};
