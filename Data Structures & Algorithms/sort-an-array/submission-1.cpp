class Solution {
public:
    void merge(vector<int> &nums, int l, int m, int r) {
        vector<int> a(m - l +1);
        vector<int> b(r - m);
        for(int i = 0; i < m - l +1; i++) {
           a[i]  = nums[l + i];
        }
        for(int i=0; i < r - m; i++) {
            b[i] = nums[m + 1+ i];
        }

        int i =0, j = 0, k = l;

        while(i < (m - l + 1) && j < (r - m)) {
            if(a[i] <= b[j]) {
                nums[k++] = a[i++];
            }
            else nums[k++] = b[j++];
        }

        while(i < (m - l + 1)) {
            nums[k++] = a[i++];
        }
        while(j < (r - m)) nums[k++] = b[j++];
    }

    void sort_merge(vector<int> &nums, int l, int r) {
       if(l >= r)  return;

       int m = l + (r - l) / 2;
       sort_merge(nums, l, m);
       sort_merge(nums, m+1, r);

       merge(nums, l, m, r);
    }
    vector<int> sortArray(vector<int>& nums) {
        int len = nums.size();
        sort_merge(nums, 0, len - 1);
        return nums;
    }
};