#include <bits/stdc++.h>
using namespace std;

int main() {
    int group;
    cin >> group;

    int num = 0;
    for (int i = 0; i < group; i++) {
        int seat_from, seat_to;
        cin >> seat_from >> seat_to;
        num += + seat_to - seat_from + 1;
    }
    cout << num << "\n";
}