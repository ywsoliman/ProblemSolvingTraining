vector<int> breakingRecords(vector<int> scores) {
    int minScore = scores[0], maxScore = scores[0], minCounter = 0, maxCounter = 0;
    for (int i = 1; i < scores.size(); i++) {
        if (maxScore < scores[i]) {
            maxScore = scores[i];
            maxCounter++;
        }
        else if (minScore > scores[i]) {
            minScore = scores[i];
            minCounter++;
        }
    }
    return {maxCounter, minCounter};
}