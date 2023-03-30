void countSort(vector<vector<string>> arr) {
    int maxRange = INT_MIN;
    for (vector<string> s : arr)
        maxRange = max(maxRange, stoi(s[0]));
        
    vector<vector<string>> v(maxRange + 1);
    
    for (int i = 0; i < arr.size(); i++) {
        if (i < arr.size() / 2)
            v[stoi(arr[i][0])].push_back("-");
        else
            v[stoi(arr[i][0])].push_back(arr[i][1]);
    }
    
    for (vector<string> main_vectors : v) {
        for (string word : main_vectors)
            cout << word << " ";
    }
}