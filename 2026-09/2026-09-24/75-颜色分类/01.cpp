class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                swap(nums[++zero], nums[i]);
            }
        }
        int one = zero;
        for (int i = one + 1; i < n; i++) {
            if (nums[i] == 1) {
                swap(nums[++one], nums[i]);
            }
        }
        return;
    }
};