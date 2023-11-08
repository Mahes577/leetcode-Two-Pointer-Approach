class Solution {
 public:
int maxArea(vector<int>& height) {
    int ans = 0 ; 
    int i = 0 ; int j = height.size()-1 ; int temp = 0 ;  
    while(i<j){
         temp = min(height[i],height[j])*(j-i);
        ans  = max(temp,ans);
        if(height[i]<height[j]){
            i++;
        }
        else j--;
    }
    return ans ; 
}
};
