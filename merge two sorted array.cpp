class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c=0;
        for(int i=0;i<m;i++){
            nums1[c++]=nums1[i];
        }
        for(int j=0;j<n;j++){
            nums1[c++]=nums2[j];
        }
        sort(nums1.begin(),nums1.end());
    }
};