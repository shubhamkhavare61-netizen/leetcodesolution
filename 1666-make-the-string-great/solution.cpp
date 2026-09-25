class Solution {
public:
    string makeGood(string s) {
        // top i leEeetcode
        int top = -1;
        // stringpq""
        //  if (s.size() == 1) return s;

        for (int i = 0; i < s.size(); i++) {
            // top++;  abBAcC
            if (top >= 0 &&
                (((s[i] >= 97 && s[i] <= 122) &&
                  (s[top] >= 65 && s[top] <= 90)) ||
                 ((s[i] >= 65 && s[i] <= 90) &&
                  (s[top] >= 97 && s[top] <= 122))) &&
                abs(s[top] - s[i]) == 32) {
                top--;

            } else {
                top++;
                s[top] = s[i];
            }
        }

        return s.substr(0, top + 1);
    }
};
