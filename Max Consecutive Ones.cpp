class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,one=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                m=max(m,one);
                one=0;
            }
            else
            one++;
        }
        return max(m,one);
    }
};
