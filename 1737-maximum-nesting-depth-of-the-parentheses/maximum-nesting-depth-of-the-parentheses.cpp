class Solution {
public:
    int maxDepth(string s) {
        int maxsize=0;
        stack<char> st;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='(')
            {
                st.push(s[i]);
                maxsize = max(maxsize, (int)st.size());
            }
            else if (s[i]==')')
            {
                st.pop();
               
            }
        }
        return maxsize;
    }
};