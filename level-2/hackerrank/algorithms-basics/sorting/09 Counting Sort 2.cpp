vector<int> countingSort(vector<int> arr) {
    int maxRange = INT_MIN;
    for (int num : arr)
        maxRange = max(maxRange, num);
    vector<int> count(maxRange + 1, 0);
    vector<int> output(arr.size(), 0);
    for (int num : arr)
        count[num]++;
    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];
    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    return output;
}