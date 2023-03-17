string kangaroo(int x1, int v1, int x2, int v2) {
    if (x1 > x2) {
        swap(x1, x2);
        swap(v1, v2);
    }
    int first = x1, second = x2;
    while (first < second) {
        first += v1;
        second += v2;
    }
    return (first == second) ? "YES" : "NO";
}