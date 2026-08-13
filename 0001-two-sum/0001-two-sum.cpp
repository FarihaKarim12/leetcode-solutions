class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results(2);
        for(int x = 0; x < nums.size(); x++) {
            for(int y = x + 1; y < nums.size(); y++) {
                if (nums[x] + nums[y] == target) {
                    results[0] = x;
                    results[1] = y;
                    return results;
                }
            }
        }
        return results;
    }
};