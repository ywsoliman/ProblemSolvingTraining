int equalizeArray(vector<int> arr) {
    int maxCount = INT_MIN;
    for (int num : arr) {
        int elementCtr = count(arr.begin(), arr.end(), num);
        maxCount = max(maxCount, elementCtr);
    }
    return arr.size() - maxCount;
}