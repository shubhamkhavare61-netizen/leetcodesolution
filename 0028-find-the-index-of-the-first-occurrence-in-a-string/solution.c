int strStr(char* haystack, char* needle) {
    char *m = haystack;
    char *n = needle;
    char *start = haystack;
    while (*m != '\0') {
        if (*m == *n) {
            m++;
            n++;
            if (*n == '\0')
                return start - haystack;
        }
        else {
            start++;
            m = start;
            n = needle;
        }
    }
    if (*needle == '\0')
        return 0;
    return -1;
}
