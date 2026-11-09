class Solution {
public:
    bool canSplit(vector<int>& nums, int k, long long maxSum) {
        int parts = 1;
        long long curr = 0;
        for (int x : nums) {
            if (curr + x > maxSum) {
                parts++;
                curr = x;
                if (parts > k) return false;
            } else {
                curr += x;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        long long lo = *max_element(nums.begin(), nums.end());
        long long hi = accumulate(nums.begin(), nums.end(), 0LL);
        long long ans = hi;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (canSplit(nums, k, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return (int)ans;
    }
        };
