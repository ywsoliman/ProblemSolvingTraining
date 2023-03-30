vector<int> quickSort(vector<int> arr) {
    vector<int> left;
    vector<int> right;
    for (int num : arr) {
        if (num < arr[0])
            left.push_back(num);
        else if (num > arr[0])
            right.push_back(num);
    }
    left.push_back(arr[0]);
    left.insert(left.end(), right.begin(), right.end());
    return left;
}