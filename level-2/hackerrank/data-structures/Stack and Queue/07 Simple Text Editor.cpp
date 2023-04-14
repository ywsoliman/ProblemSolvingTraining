#include <cmath>
#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

class TextEditor {
private:
    string str;
    stack<string> s;
public:
    TextEditor() {
        str = "";
    }
    void append(const string& W) {
        s.push(str);
        str += W;
    }
    void deleteChars(int k) {
        s.push(str);
        str = str.erase(str.length() - k);
    }
    void printChar(int k) {
        cout << str[k - 1] << "\n";
    }
    void undo() {
        str = s.top();
        s.pop();
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q; cin >> q;
    string op;
    vector<string> ops;
    while (q--) {
        getline(cin >> ws, op);
        ops.push_back(op);
    }
    auto* te = new TextEditor();
    for (const string& s : ops) {
        if (s.size() == 1)
            te->undo();
        else {
            string restStr = s.substr(2, s.length() - 1);
            switch(int(s[0] - '0')) {
                case 1:
                    te->append(restStr);
                    break;
                case 2:
                    te->deleteChars(stoi(restStr));
                    break;
                case 3:
                    te->printChar(stoi(restStr));
            }
        }
    }
    return 0;
}
