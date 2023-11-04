class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>v(n,1);
    for(int i=1;i<n;i++){
        v[i]=v[i-1]*nums[i-1];
    } 
    for(int i=n-2;i>=0;i--){
        v[i]=v[i]*nums[i+1];
        nums[i]=nums[i]*nums[i+1];

    } 
    return v; 
    }
};