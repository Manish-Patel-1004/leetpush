1class Solution {
2public:
3    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2,
4                                       int k) {
5        int m = nums1.size();
6        int n = nums2.size();
7        vector<vector<int>> ans;
8        if (m == 0 || n == 0 || k == 0)
9            return ans;
10        priority_queue<pair<int, pair<int, int>>,
11                       vector<pair<int, pair<int, int>>>, greater<>>
12            pq;
13        set<pair<int, int>> visited;
14        pq.push({nums1[0] + nums2[0], {0, 0}});
15        visited.insert({0, 0});
16        while (k-- && !pq.empty()) {
17            auto top = pq.top();
18            pq.pop();
19            int i = top.second.first;
20            int j = top.second.second;
21            ans.push_back({nums1[i], nums2[j]});
22            if (i + 1 < m && !visited.count({i + 1, j})) {
23                pq.push({nums1[i + 1] + nums2[j], {i + 1, j}});
24                visited.insert({i + 1, j});
25            }
26            if (j + 1 < n && !visited.count({i, j + 1})) {
27                pq.push({nums1[i] + nums2[j + 1], {i, j + 1}});
28                visited.insert({i, j + 1});
29            }
30        }
31        return ans;
32    }
33};
34