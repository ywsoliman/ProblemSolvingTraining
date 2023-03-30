int introTutorial(int V, vector<int> arr) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
        int mid = l + ceil((r - l)/2);
        if (V == arr[mid])
            return mid;
        else if (V < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}