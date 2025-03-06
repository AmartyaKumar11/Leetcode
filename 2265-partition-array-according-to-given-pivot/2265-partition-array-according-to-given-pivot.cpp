class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int N = nums.size();
        vector<int> ans(N);

        int left = 0;
        for (int i = 0; i < N; i++) {
            if (nums[i] < pivot) {
                ans[left++] = nums[i];
            }
        }

        int right = N - 1;
        for (int i = N - 1; i >= 0; i--) {
            if (nums[i] > pivot) {
                ans[right--] = nums[i];
            }
        }

        while (left <= right) {
            ans[left++] = pivot;
        }

        return ans;
    }
};