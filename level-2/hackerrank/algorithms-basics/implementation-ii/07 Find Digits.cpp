int findDigits(int n) {
    int ctr = 0, temp = n;
    while (temp != 0) {
        int d = temp % 10;
        temp /= 10;
        if (d == 0) continue;
        if (n % d == 0) ctr++;
    }
    return ctr;
}