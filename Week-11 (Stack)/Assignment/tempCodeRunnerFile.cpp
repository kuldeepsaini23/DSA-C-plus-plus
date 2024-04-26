
 int longestValidParentheses(string s) {
        //stack approach
        stack<int> st;
        st.push(-1);
        int maxLen = 0;