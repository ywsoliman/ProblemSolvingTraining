vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(), arr.end(), greater<>());
    vector<int> res;
    while (!arr.empty()) {
        res.push_back(arr.size());
        int min = arr[arr.size() - 1];
        for (int num : arr) {
            if (num == min)
                arr.pop_back();
        }
    }
    return res;
}