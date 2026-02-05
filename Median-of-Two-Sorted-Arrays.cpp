1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int m=nums1.size();
5        int n=nums2.size();
6        vector<int>merged;
7        for(int i=0;i<m;i++)
8            merged.push_back(nums1[i]);
9        for(int i=0;i<n;i++)
10            merged.push_back(nums2[i]);
11        sort(merged.begin(),merged.end());
12        int total=merged.size();
13        if(total%2==1)
14            return static_cast<double>(merged[total/2]);
15        else
16        {
17            int m1=merged[total/2-1];
18            int m2=merged[total/2];
19            return (static_cast<double>(m1)+static_cast<double>(m2))/2.0;
20        }
21    }
22};