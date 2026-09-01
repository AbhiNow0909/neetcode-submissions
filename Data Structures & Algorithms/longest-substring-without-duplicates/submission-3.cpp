class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> cset;
        int l=0, res=0;

        for(int r = 0; r<s.size();r++)
        {
            while(cset.find(s[r]) != cset.end())
            {
                cset.erase(s[l]);
                l++;
            }

            cset.insert(s[r]);
            res=max(res, r-l+1);
        }

        return res;
    }
};
