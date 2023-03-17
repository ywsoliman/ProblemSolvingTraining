void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long min = 0, max = 0;
    for (int i = 1; i < arr.size() - 1; i++) {
        min += arr[i];
        max += arr[i];
    }
    min += arr[0];
    max += arr[arr.size() - 1];
    cout << min << " " << max;
}