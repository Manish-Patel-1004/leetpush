1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int>ans;
5        for(int i=0;i<nums.size();i++)
6            ans.push_back(nums[i]);
7        for(int i=0;i<nums.size();i++)
8            ans.push_back(nums[i]);
9        return ans;
10    }
11};