class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n - 1;

        int leftMax = 0;
        int rightMax = 0;
        int result = 0;
        while(i < j) {
            if(height[j] > height[i]) {
                if(height[i] >= leftMax) leftMax = height[i];
                result += leftMax - height[i];
                i++;
            }
            else {
                if(height[j] >= rightMax) rightMax = height[j];
                result += rightMax - height[j];
                j--;
            }
        }
        return result;
    }
};