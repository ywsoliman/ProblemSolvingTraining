void staircase(int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j < i)
                cout << " ";
            else
                cout << "#";
        }        
        cout << "\n";
    }
}