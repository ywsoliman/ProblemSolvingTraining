string sumOfDigits(const string& s) {
    int sum = 0;
    for (char c : s)
        sum += c - '0';
    return to_string(sum);
}

int superDigit(const string& n, int k) {

    string sum = sumOfDigits(n);
    string temp;
    for (int i = 0; i < k; i++)
        temp += sum;
    while (temp.length() != 1) {
        temp = sumOfDigits(temp);
    }
    return stoi(temp);
}