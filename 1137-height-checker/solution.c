int heightChecker(int* heights, int heightsSize) {
    int count = 0, m, k, key;
    int arr[heightsSize];
    // 1 1 4 2 1 3
    for (m = 0; m < heightsSize; m++)
        arr[m] = heights[m];
    for (m = 1; m < heightsSize; m++) {
        key = heights[m];
        // count++;
        for (k = m - 1; k >= 0; k--) {
            if (key < heights[k])
                heights[k + 1] = heights[k];
            else {
                break;
            }
        }
        heights[k + 1] = key;
    }
    for (m = 0; m < heightsSize; m++) {
        if (arr[m] != heights[m])
            count++;
    }
    return count;
}
