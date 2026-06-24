#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <unordered_map>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    unordered_map<string, string> attrValue;
    vector<string> tagStack;
    tagStack.reserve(n);

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        if (line.empty()) {
            --i;
            continue;
        }

        if (line.size() >= 2 && line[1] == '/') {
            if (!tagStack.empty()) {
                tagStack.pop_back();
            }
            continue;
        }

        stringstream ss(line);
        string token;
        ss >> token;
        string tagName = token.substr(1);
        if (!tagName.empty() && tagName.back() == '>') {
            tagName.pop_back();
        }

        string currentPath;
        if (tagStack.empty()) {
            currentPath = tagName;
        } else {
            currentPath = tagStack.back() + "." + tagName;
        }
        tagStack.push_back(currentPath);

        while (ss >> token) {
            if (token == ">" || token == "/>") {
                break;
            }

            string attrName = token;
            string equals;
            string attrValueRaw;

            ss >> equals;
            ss >> attrValueRaw;

            if (!attrValueRaw.empty() && attrValueRaw.front() == '"') {
                attrValueRaw.erase(0, 1);
            }
            if (!attrValueRaw.empty() && attrValueRaw.back() == '>') {
                attrValueRaw.pop_back();
            }
            if (!attrValueRaw.empty() && attrValueRaw.back() == '"') {
                attrValueRaw.pop_back();
            }

            string key = currentPath + "~" + attrName;
            attrValue[key] = attrValueRaw;
        }
    }

    for (int i = 0; i < q; ++i) {
        string query;
        getline(cin, query);
        if (query.empty()) {
            --i;
            continue;
        }
        auto it = attrValue.find(query);
        if (it != attrValue.end()) {
            cout << it->second;
        } else {
            cout << "Not Found!";
        }
        if (i < q - 1) {
            cout << '\n';
        }
    }

    return 0;
}
