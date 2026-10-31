class Solution {
private:
long long minBan (vector<int>& piles, int h){
    long long toh =0;
    int n = piles.size();
    for(int i =0; i<n; i++){
        toh += ceil((double)piles[i]/h);
    }
    return toh;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo =1;
        int hi = *max_element(piles.begin(), piles.end( ));
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(minBan(piles,mid) <= h){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return lo;
    }
};
