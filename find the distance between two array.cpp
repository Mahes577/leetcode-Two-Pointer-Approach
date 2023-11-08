
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int ans = 0, size = arr2.size();
        for(int n : arr1) {
            int i = 0, j = size-1;
            if (n > arr2[i] && n < arr2[j]) {
                while(i+1 < j) {
                    int mid = (i+j)/2;
                    if (abs(n-arr2[mid]) <= d) {
                        i = mid;
                        j = mid;
                    } else if (n < arr2[mid]) {
                        j = mid;
                    } else {
                        i = mid;
                    }
                }
            }
            ans += (abs(n-arr2[i]) > d && abs(n-arr2[j]) > d) ? 1 : 0;
        }
        return ans;
    }
};