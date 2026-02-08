1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int lmax=0,rmax=0;
5        int n=height.size();
6        int l=0,r=n-1;
7        int ans=0;
8        while(l<r)
9        {
10            if(height[l]<=height[r])
11            {
12                if(lmax>height[l])
13                    ans+=lmax-height[l];
14                else
15                    lmax=height[l];
16                l++;
17            }
18            else
19            {
20                if(rmax>height[r])
21                    ans+=rmax-height[r];
22                else
23                    rmax=height[r];
24                r--;
25            }
26        }
27        return ans;
28    }
29};