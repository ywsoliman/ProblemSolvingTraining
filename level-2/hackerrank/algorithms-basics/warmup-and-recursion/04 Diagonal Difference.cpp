int diagonalDifference(vector<vector<int>> arr) {
    int primary = 0, secondary = 0;
    int j = 0, k = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++) {
        primary += arr[i][j];
        secondary += arr[i][k];
        j++;
        k--;
    }
    return abs(primary - secondary);
}