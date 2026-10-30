class Solution {
private:
    long long sumD(vector<int>& nums, int d) {
        long long sum = 0;
        for (int x : nums) {
            sum += (x + d - 1) / d;
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1;
        int hi = *max_element(nums.begin(), nums.end());

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (sumD(nums, mid) <= threshold) {
                hi = mid - 1;   // mid works, try smaller
            } else {
                lo = mid + 1;   // too big a sum, need larger divisor
            }
        }
        return lo;
    }
};
