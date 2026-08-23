class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char,char> mp = {
            {')','('},{'}','{'},{']','['}
        };
        for(char c : s)
        {
            if(mp.count(c))
            {
                if(!stk.empty() && stk.top() == mp[c])
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                stk.push(c);
            }
        }

        return stk.empty();
    }
};
