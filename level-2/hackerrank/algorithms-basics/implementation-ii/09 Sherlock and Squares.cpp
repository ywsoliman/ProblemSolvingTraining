int squares(int a, int b) {
    int num, i = 1, ctr = 0;
    while (true) {
        num = i * i;
        if (num > b) break;
        if (num >= a && num <= b) ctr++;
        i++;
    }
    return ctr;
}