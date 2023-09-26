class Solution {
public:
    bool isValid(string s)
    {
        std::stack<char> str;
        int i = 0;

        if (s.empty() || s.size() % 2 == 1)
            return (false);
        while (i < s.size())
        {
            if (str.empty())
                str.push(s[i]);
            else if (str.top() == '(' && s[i] == ')'
                || str.top() == '[' && s[i] == ']'
                || str.top() == '{' && s[i] == '}')
                str.pop();
            else
                str.push(s[i]);
            i++;
        }
        if (str.empty())
            return (true);
        return (false);
    }
};