void insertionSort(vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        int j = i;
        while (j > 0 && v[j - 1] > v[j]) {
            swap(v[j - 1], v[j]);
            j--;
        }
    }
    for (int num : v)
        cout << num << " ";
}