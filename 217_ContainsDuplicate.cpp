class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> freq(nums.begin(), nums.end());

        int m= freq.size();
        int n= nums.size();

        if(m<n) return true;
        else return false;
    }
};
