
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> str;

        stringstream ss(path);
        string el;

        while (getline(ss, el, '/')) {
            if (el == "..") {
                if (!str.empty()) {
                    str.pop();
                }
            } else if (el != "." && !el.empty()) {
                str.push(el);
            }
        }

        // Reconstruct the simplified path
        string simplifiedPath = "";
        while (!str.empty()) {
            simplifiedPath = "/" + str.top() + simplifiedPath;
            str.pop();
        }

        return simplifiedPath.empty() ? "/" : simplifiedPath;
    }
};
