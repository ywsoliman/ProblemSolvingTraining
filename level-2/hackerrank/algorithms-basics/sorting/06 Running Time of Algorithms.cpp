int runningTime(vector<int> arr) {
    int shifts = 0;
    for (int i = 1; i < arr.size(); i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
            shifts++;
        }
    }
    return shifts;
}