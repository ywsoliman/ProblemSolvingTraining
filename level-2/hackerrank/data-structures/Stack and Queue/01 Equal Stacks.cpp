int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    if (h1.empty() || h2.empty() || h3.empty())
        return 0;
    stack<int> s1, s2, s3;
    int sum_1 = 0, sum_2 = 0, sum_3 = 0;
    for (int i = h1.size() - 1; i >= 0; i--) {
        s1.push(h1[i]);
        sum_1 += h1[i];
    }
    for (int i = h2.size() - 1; i >= 0; i--) {
        s2.push(h2[i]);
        sum_2 += h2[i];
    }
    for (int i = h3.size() - 1; i >= 0; i--) {
        s3.push(h3[i]);
        sum_3 += h3[i];
    }
    while ((sum_1 != sum_2) || (sum_1 != sum_3) || (sum_2 != sum_3)) {
        if (sum_1 >= sum_2 && sum_1 >= sum_3) {
            sum_1 -= s1.top();
            s1.pop();
        } else if (sum_2 >= sum_1 && sum_2 >= sum_3) {
            sum_2 -= s2.top();
            s2.pop();
        } else {
            sum_3 -= s3.top();
            s3.pop();
        }
    }
    return sum_1;
}