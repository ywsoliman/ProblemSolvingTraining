int getReverse(int num) {
    int m = 0;
    while (num > 0) {
        m = m * 10 + num % 10;
        num /= 10;
    }
    return m;
}

int beautifulDays(int i, int j, int k) {
    int res = 0;
    for (int range = i; range <= j; range++) {
        if (abs(range - getReverse(range)) % k == 0)
            res++;
    }
    return res;
}