string balancedSums(vector<int> arr) {
    // x + target + x = sum
    // 2x + target = sum;
    // 2x = sum - target;
    int sum = 0, left = 0;
    for (int num : arr)
        sum += num;
    for (int num : arr) {
        if (2 * left == sum - num)
            return "YES";
        else
            left += num;
    }
    return "NO";
}