class Solution {
public:
    bool canJump(vector<int>& nums) {
        int currIdx=0, finalIdx=0;
        int n= nums.size();

        if(n==1) return true;

       for(int i=0; i<n; i+=currIdx){
            currIdx= nums[i];
            finalIdx += nums[i];

            if(currIdx==0) break;

            if(finalIdx >= nums[n-1])
            return true;
        }

        return false;
    }
};
