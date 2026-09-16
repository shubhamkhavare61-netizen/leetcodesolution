class Solution {
public:
    string simplifyPath(string path) {
        string st[10000];
        int top = -1;

        string word = "";

        for (int i = 0; i <= path.size(); i++) {

            if (i == path.size() || path[i] == '/') {

                if (word == "..") {
                    if (top >= 0)
                        top--;
                }
                else if (word != "" && word != ".") {
                    top++;
                    st[top] = word;
                }

                word = "";
            }
            else {
                word += path[i];
            }
        }

        string ans = "";

        for (int i = 0; i <= top; i++) {
            ans += "/";
            ans += st[i];
        }

        if (ans == "")
            return "/";

        return ans;
    }
};
