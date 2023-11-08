class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int mx=INT_MIN;
       int n=nums.size();
       int i=0,j=n-1;
       while(i<j){
         int  h= nums[i]+nums[j];
          mx=max(mx,h);
          i++;
          j--;
       } 
       return mx;
    }
};