class Solution {
    public int removeDuplicates(int[] nums) {
        int ind=2;
        for(int i=2;i<nums.length;i++)
        {
            if(nums[ind-2]!=nums[i])
            {
                nums[ind]=nums[i];
                ind++;
            }
        }
        return ind;
    }
}