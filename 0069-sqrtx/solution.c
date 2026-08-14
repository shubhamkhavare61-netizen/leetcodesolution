int mySqrt(int x) {
    long long k;
    if (x == 0)
        return 0;
    for (k = 1; k <= x / 2; k++) {
        if (x == k * k)
            return k;
        else if ((k * k) < x && x < ((k + 1) * (k + 1)))
            return k;
    }
    return k;
}
