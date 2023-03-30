vector<int> icecreamParlor(int m, vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == m)
                return {i + 1, j + 1};
        }
    }
    return {};
}