class Solution {
    bool canShip(const vector<int>& weights, int days, int cap) {
        int d = 1, load = 0;
        for (int w : weights) {
            if (load + w > cap) {
                d++;
                load = 0;
            }
            load += w;
        }
        return d <= days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (canShip(weights, days, mid))
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;
    }

