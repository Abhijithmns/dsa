class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());

        int len = 0;
        for(int it : s)  {
            if(s.find(it - 1) == s.end()) {
                int new_num = it;
                int len1 = 1;
                while(s.find(new_num + 1) != s.end()) {
                    new_num ++;
                    len1 ++;
                }
              len = max(len,len1);
            }
            

        }

        return len;
        
    }
};