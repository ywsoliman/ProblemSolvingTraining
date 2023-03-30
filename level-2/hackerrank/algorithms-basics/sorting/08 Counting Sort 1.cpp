vector<int> countingSort(vector<int> arr) {
    vector<int> v(100, 0);
    for (int num : arr)
        v[num]++;
    return v;
}