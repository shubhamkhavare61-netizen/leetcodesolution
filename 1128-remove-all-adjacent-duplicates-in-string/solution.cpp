class Solution {
public:
    string removeDuplicates(string s) {
        char c[100000];
        int top = -1;

        int p = s.size();
        //string c;
        // abbaca
        //  a b
        for (int i = 0; i < p; i++) {

            top++;
            c[top] = s[i];

            if ((top + 1) >= 2 && c[top] == c[top - 1]) {

                top -= 2;
            }
        }
        // string result=c.resize(top+1);
        // return result;
        return string(c, top + 1);
    }
};
