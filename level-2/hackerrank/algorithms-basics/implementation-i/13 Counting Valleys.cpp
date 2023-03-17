int countingValleys(int steps, string path) {
    int valleys = 0, step = 0;
    bool enteredValley = false;
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'D') step++;
        else step--;
        if (!enteredValley) {
            if (step == 1) valleys++;
            enteredValley = true;
        }
        if (step == 0)
            enteredValley = false;
    }
    return valleys;
}