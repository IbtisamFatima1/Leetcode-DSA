class Solution {
public:
    bool isPalindrome(int x) {
        stack<char> st;
        
        string s = to_string(x);
        char arr[s.size()];
        for (int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }
         for (int i=0;i<s.size();i++)
        {
            arr[i]=st.top();
            st.pop();

        }
        for (int i=0;i<s.size();i++)
        {
            if (s[i]!=arr[i])
            {
                return false;
            }
        }
        return true;
    }
};