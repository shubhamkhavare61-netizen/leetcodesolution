int titleToNumber(char* columnTitle) {
    int s = 0;
    while (*columnTitle) {
        s = s * 26 + (*columnTitle - 64);
        columnTitle++;
    }
    return s;
}
