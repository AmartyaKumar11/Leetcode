class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        int max_sum = sum;
        for(int i = 1 ; i<nums.size(); i++){
            if(nums[i] > nums[i-1]){
                sum+= nums[i];
            } else sum = nums[i];
        max_sum = max(sum,max_sum);
        }
        return max_sum;
    }
};