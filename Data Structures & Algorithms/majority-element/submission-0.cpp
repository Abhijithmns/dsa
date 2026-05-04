//best soln is to use boyer- moore voting algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i< n;i++) {
            int res = 0;
            for(int j = 0; j < n;j++) {
                if(nums[i] == nums[j]) {
                    res++;
                }
                
            }
            if(res > n / 2) return nums[i];
        }
    }
};