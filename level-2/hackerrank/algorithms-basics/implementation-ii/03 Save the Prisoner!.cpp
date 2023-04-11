int saveThePrisoner(int n, int m, int s) {
    int res = (s + m - 1) % n;
    return (res == 0) ? n : res;
}