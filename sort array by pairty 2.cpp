class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      int n=nums.size();
      int odd=1,even=0;
      while(even<n&&odd<n){
          if(nums[even]%2==0){
              even=even+2;
          }
          else if(nums[odd]%2!=0){
              odd=odd+2;
          }
          else{
              swap(nums[even],nums[odd]);
          }
      }
      return nums;  
    }
};