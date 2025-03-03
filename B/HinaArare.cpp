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

// example
// int N;
// int main() {
//     cin >> N;
//     set<char> s;
//     rep(i, 0, N) {
//         char c; cin >> c;
//         s.insert(c);
//     }

//     if (s.size() == 3) printf("Three\n");
//     else printf("Four\n");
// }