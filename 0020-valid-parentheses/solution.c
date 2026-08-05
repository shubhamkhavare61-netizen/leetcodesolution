bool isValid(char* s) {
    int n = -1;
    char c[strlen(s)];
    while (*s != '\0')
    {
        if (*s == '(') {
            n++;
            c[n] = ')';    
        } else if (*s == '{') {
            n++;
            c[n] = '}';          
        } else if (*s == '[') {
            n++;
            c[n] = ']';
        } else {
            if (n == -1)
                return false;
            else if (*s == c[n])
                n--;
            else
                return false;
        }
        s++;
    }
    if (n == -1)
        return true;
    return false;
}
