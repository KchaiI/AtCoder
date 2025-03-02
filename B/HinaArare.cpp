#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool check = 0;
    for (int i = 0; i < n; i++) {
        string color;
        cin >> color;
        if (color == "Y") {
            check = true;
        }
    }

    if (check) {
        cout << "Four\n";
    } else {
        cout << "Three\n";
    }
}