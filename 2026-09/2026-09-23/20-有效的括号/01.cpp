class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (s[i]==')' || s[i]=='}' || s[i]==']') {
                if (s.empty()) {
                    return false;
                }
                if (s[i]==')' && st.top()!='(') {
                    return false;
                }
                if (s[i]==']' && st.top()!='[') {
                    return false;
                }
                if (s[i]=='}' && st.top()!='{') {
                    return false;
                }
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
    }
};