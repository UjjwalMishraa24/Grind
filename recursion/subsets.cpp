class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        backtrack(nums, 0, cur, res);
        return res;
    }

private:
    void backtrack(const vector<int>& nums, int start,
                   vector<int>& cur, vector<vector<int>>& res) {
        res.push_back(cur);  // every path is a valid subset
        for (int i = start; i < nums.size(); ++i) {
            cur.push_back(nums[i]);
            backtrack(nums, i + 1, cur, res);
            cur.pop_back();
        }
    }
};
