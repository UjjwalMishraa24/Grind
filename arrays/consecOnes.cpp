class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxi =0;
        int cnt =0;
        for(int x : nums){
            if(x == 1){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else{
                cnt=0;
            }
        }
            
        
        return maxi;

        
    }
};
