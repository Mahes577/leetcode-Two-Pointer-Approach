class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    long long int n=nums.size();
    //vector<int>v;
    for(int i=0;i<n;i++)
      nums[i]=nums[i]*nums[i];
     sort(nums.begin(),nums.end());   
    
    return nums;   
    }
};