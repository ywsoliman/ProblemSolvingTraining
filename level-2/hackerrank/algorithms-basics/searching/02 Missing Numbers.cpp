vector<int> missingNumbers(const vector<int>& arr, const vector<int>& brr) {
    vector<int> res;
    unordered_map<int, int> umap;
    for (int num : brr)
        umap[num]++;
    for (int num : arr)
        umap[num]--;
    for (auto pair : umap) {
        if (pair.second > 0)
            res.push_back(pair.first);
    }
    sort(res.begin(), res.end());
    return res;
}