class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector <int> res(n,0);
        int od =1;
        int ev =0;
        for(int i=0; i<n; i++){
            if (nums[i] > 0){
                res[ev] = nums[i];
                ev +=2;
            }
            else if(nums[i] < 0 ){
                res[od] = nums[i];
                od +=2;
            }
        }
        return res;
        
    }
};
