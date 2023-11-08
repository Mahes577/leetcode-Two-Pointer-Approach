class Solution{
    public:
int findMaxK(vector<int>& nums) {
        int max1= -1;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j]*-1)
                    max1 = max(nums[i], max1);
            }
        }
        return max1;
    }
    };
