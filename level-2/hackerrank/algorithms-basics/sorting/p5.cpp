#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector<int> v) {
    for (int i = 1; i < v.size(); i++) {
        int j = i;
        while (j > 0 && v[j - 1] > v[j]) {
            swap(v[j - 1], v[j]);
            j--;
        }
    }
    for (int num : v)
        cout << num << " ";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v;
    int n, t; cin >> t;
    while (t-- && cin >> n) {
        v.push_back(n);
    }
    insertionSort(v);
    return 0;
}
