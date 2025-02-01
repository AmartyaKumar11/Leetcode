class Solution {
public:
    bool checkparity(int n1, int n2) {
        return (n1 % 2 == 0 && n2 % 2 == 1) || (n1 % 2 == 1 && n2 % 2 == 0);
    }
    
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (!checkparity(nums[i], nums[i + 1])) {
                return false;
            }
        }
        return true;
    }
};
