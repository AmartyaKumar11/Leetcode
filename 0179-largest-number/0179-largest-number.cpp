class Solution {
public:
    static bool autocomp(int& a, int& b){
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), autocomp);
        if(nums[0] == 0){
            return "0";
        }
        string res = "";
        for(int num: nums){
            res += to_string(num);
        }
        return res;
    }
};