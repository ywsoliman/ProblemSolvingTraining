vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> v(n);
    vector<int> res;
    int lastAnswer = 0;
    for (vector<int> query : queries) {
        int idx = (query[1] ^ lastAnswer) % n;
        if (query[0] == 1)
            v[idx].push_back(query[2]);
        else {
            lastAnswer = v[idx][query[2] % v[idx].size()];
            res.push_back(lastAnswer);
        }
    }
    return res;
}