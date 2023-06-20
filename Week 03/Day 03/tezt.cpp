#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    int T;
    cin >> T;
    queue<string> q;
    while (T--) {
        int n;
        cin >> n;
        unordered_set<string> strSet;
        vector<string> str(n);
        for (int i = 0; i < n; i++) {
            cin >> str[i];
            strSet.insert(str[i]);
        }
        string ans = "";
        for (int i = 0; i < n; i++) {
            bool isEqual = false;
            for (int j = 0; j < str[i].length(); j++) {
                for (int k = j + 1; k < str[i].length(); k++) {
                    string substring1 = str[i].substr(0, j + 1);
                    string substring2 = str[i].substr(j + 1, k - j);
                    if (strSet.count(substring1) && strSet.count(substring2)) {
                        isEqual = true;
                        break;
                    }
                }
                if (isEqual) {
                    break;
                }
            }
            if (isEqual) {
                ans += '1';
            } else {
                ans += '0';
            }
        }
        q.push(ans);
    }
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}

