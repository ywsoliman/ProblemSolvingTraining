int hurdleRace(int k, vector<int> height) {
    int highestHurdle = INT_MIN;
    for (int h : height)
        highestHurdle = max(highestHurdle, h);
    return (k >= highestHurdle) ? 0 : highestHurdle - k;
}