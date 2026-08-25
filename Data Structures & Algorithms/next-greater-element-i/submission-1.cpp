class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> num1idx;

        for(int i = 0;i<nums1.size();i++)
        {
            num1idx[nums1[i]] = i;
        }

        vector<int> res(nums1.size(),-1);
        stack<int> stk;

        for(int num : nums2)
        {
            while(!stk.empty() && num>stk.top())
            {
                int val = stk.top();
                stk.pop();
                int idx = num1idx[val];
                res[idx]=num;
            }

            if(num1idx.find(num) != num1idx.end())
            {
                stk.push(num);
            }
        }

        return res;
    }
};