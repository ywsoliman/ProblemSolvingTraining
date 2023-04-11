int minimumDistances(vector<int> a) {
    int minDistance = INT_MAX;
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j])
                minDistance = min(minDistance, j - i);
        }
    }
    return (minDistance == INT_MAX) ? -1 : minDistance;
}