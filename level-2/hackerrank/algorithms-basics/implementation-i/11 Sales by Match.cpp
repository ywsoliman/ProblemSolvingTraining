int sockMerchant(int n, vector<int> ar) {
    sort(ar.begin(), ar.end());
    int totalPairs = 0;
    for (int i = 0; i < ar.size() - 1; i++) {
        if (ar[i] == ar[i + 1]) {
            totalPairs++;
            i++;
        }
    }
    return totalPairs;
}