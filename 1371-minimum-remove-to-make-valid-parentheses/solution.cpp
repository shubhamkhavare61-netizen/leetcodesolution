class Solution {
public:
    string minRemoveToMakeValid(string s) {

        int flag[10000];
        int top = -1;
        int h = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == ')') {

                if (s[i] == '(') {

                    top++;
                    s[top] = s[i];

                    h++;
                    flag[h] = top;
                }

                else if (s[i] == ')' && h >= 0) {

                    top++;
                    s[top] = s[i];
                    h--;
                }
            }

            else {
                top++;
                s[top] = s[i];
            }
        }
        if(top==-1) return"";
        
        while (h >= 0) {

            int m = flag[h];
            int j = m;
            while (j < top) {
                s[j] = s[j + 1];
                j++;
            }

            top--;
            h--;
        }

        s.resize(top + 1);

        return s;
    }
};
