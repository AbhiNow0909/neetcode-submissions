class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size(), prefix = 0, res= 0;

        vector<int> count(n+1, 0);
        count[0]=1;

        for(int num : nums)
        {
            prefix += num;
            if(prefix >= goal)
            {
                res += count[prefix-goal];
            }

            count[prefix]++;
        }

        return res;
    }
};