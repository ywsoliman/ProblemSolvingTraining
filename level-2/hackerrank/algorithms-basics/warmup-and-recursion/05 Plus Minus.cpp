void plusMinus(vector<int> arr) {
    int pos = 0, neg = 0, zero = 0;
    for (int num : arr) {
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }
    double arrSize = arr.size();
    cout << pos / arrSize << "\n" << neg / arrSize << "\n" << zero / arrSize;
}