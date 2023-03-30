bool compare(const string &a, const string &b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(), unsorted.end(), compare);
    return unsorted;
}