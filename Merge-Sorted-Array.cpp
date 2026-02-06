1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int i=m-1;
5        int j=n-1;
6        int k=m+n-1;
7        while(i>=0&&j>=0)
8        {
9            if(nums1[i]>nums2[j])
10                nums1[k--]=nums1[i--];
11            else
12                nums1[k--]=nums2[j--];
13        }
14        while(j>=0)
15            nums1[k--]=nums2[j--];
16    }
17};