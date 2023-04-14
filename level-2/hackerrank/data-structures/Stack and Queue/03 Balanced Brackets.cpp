string isBalanced(string s) {
    stack<char> ss;
    for (char c : s) {
        if (ss.empty())
            ss.push(c);
        else if ((ss.top() == '(' && c == ')') ||
                (ss.top() == '{' && c == '}')  ||
                (ss.top() == '[' && c == ']'))
            ss.pop();   
        else
            ss.push(c);
    }
    return ss.empty() ? "YES" : "NO";
}