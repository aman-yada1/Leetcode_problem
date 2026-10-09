// 0 ms | 35.1 MB
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int m = *min_element(nums1.begin(),nums1.end());
        int n = *min_element(nums2.begin(),nums2.end());

        return n - m;
    }
};