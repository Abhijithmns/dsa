class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int i = 0;
        int j = n - 1;

        int result = 0;

        while(i < j){

            int x = min(height[i], height[j]);
            int area = x * (j - i);

            result = max(result, area);

            if(height[i] < height[j])
                i++;
            else
                j--;
        }

        return result;
    }
};