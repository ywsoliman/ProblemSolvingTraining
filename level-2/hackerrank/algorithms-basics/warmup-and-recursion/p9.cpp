#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hrs = s.substr(0, 2);
    string time = s.substr(s.length() - 2);
    string res;
    int hrsInt = stoi(hrs);
    if (hrsInt < 12 && time == "PM") {
        res += to_string(hrsInt + 12);
    } else if (hrsInt == 12 && time == "AM") {
            res += "00";
    } else
        res += hrs;
    res += s.substr(2, 6);
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}