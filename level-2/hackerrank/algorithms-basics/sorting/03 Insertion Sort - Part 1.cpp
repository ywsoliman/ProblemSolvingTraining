void insertionSort1(int n, vector<int> arr) {
    int lastNum = arr[n - 1];
    bool flag = false;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i - 1] > lastNum)
            arr[i] = arr[i - 1];
        else {
            arr[i] = lastNum;
            flag = true;
        }
        for (int num : arr)
            cout << num << " ";
        cout << "\n";
        if (flag)
            return;
    }
}
