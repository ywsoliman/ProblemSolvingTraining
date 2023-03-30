int partition(vector<int> &v, int low, int high) {
    int pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (v[j] <= pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return i + 1;
}

void quickSort(vector<int> &v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

vector<int> closestNumbers(vector<int> arr) {
    quickSort(arr, 0, arr.size() - 1);
    vector<int> res;
    int minDistance = INT_MAX;
    for (int i = 1; i < arr.size(); i++) {
        if (minDistance > arr[i] - arr[i - 1]) {
            minDistance = arr[i] - arr[i - 1];
            res.clear();
        }
        if (minDistance == arr[i] - arr[i - 1]) {
            res.push_back(arr[i - 1]);
            res.push_back(arr[i]);
        }
    }
    return res;
}