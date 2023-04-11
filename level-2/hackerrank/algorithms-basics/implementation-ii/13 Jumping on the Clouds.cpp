int jumpingOnClouds(vector<int> c) {
    int steps = 0;
    for (int i = 0; i < c.size() - 1;) {
        if (c[i + 2] == 0) i += 2;
        else               i += 1;
        steps++;
    }
    return steps;
}