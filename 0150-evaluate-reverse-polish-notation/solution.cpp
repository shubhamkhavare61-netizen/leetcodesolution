class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int curr[100000];
        int top = -1;
        int ans;
        for (int i = 0; i < tokens.size(); i++) {

            if (tokens[i] == "+" ||
                tokens[i] == "-" ||
                tokens[i] == "*" ||
                tokens[i] == "/") {
                int a = curr[top--];
                int b = curr[top--];
                if (tokens[i] == "+")
                    ans = b + a;
                else if (tokens[i] == "-")
                    ans = b - a;
                else if (tokens[i] == "*")
                    ans = b * a;
                else
                    ans = b / a;
                top++;
                curr[top] = ans;
            }
            else {
                top++;
                curr[top] = stoi(tokens[i]);
            }
        }

        return curr[top];
    }
};
