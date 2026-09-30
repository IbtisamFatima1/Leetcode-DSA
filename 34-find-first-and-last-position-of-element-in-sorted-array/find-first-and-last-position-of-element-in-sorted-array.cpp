class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {bound(nums, target, true), bound(nums, target, false)};
    }

private:
    int bound(vector<int>& nums, int target, bool findFirst) {
        int left = 0, right = nums.size() - 1, ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                ans = mid;
                if (findFirst) right = mid - 1;   // keep searching left
                else left = mid + 1;              // keep searching right
            }
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return ans;
    }
};