int birthdayCakeCandles(vector<int> candles) {
    int maxHeight = INT_MIN;
    for (int candle : candles)
        if (maxHeight < candle)
            maxHeight = candle;
    return count(candles.begin(), candles.end(), maxHeight);
}