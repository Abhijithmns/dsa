class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int a = nums.size();
        int b = s.size();
        int diff = a - b;
        if(diff > 0) return true;
        return false;
    }
};