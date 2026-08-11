class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int prod = 1;
        int countzero = 0;
        int zeroind = -1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) {
                countzero++;
                zeroind = i;
            } else {
                prod = prod*nums[i];
            }
           
        }
        if(countzero>1) return vector<int>(nums.size(),0);

        if(countzero==1) {
            res = vector<int>(nums.size(),0);
            res[zeroind] = prod;
            return res;
        }
        for(int i=0;i<nums.size();i++) {
            res.push_back(prod/nums[i]);
        }
        return res;

    }
};
