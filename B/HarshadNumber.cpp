#include <bits/stdc++.h>
using namespace std;
int N;

int main() {
    cin >> N;

    int harshad = 0;
    harshad = (N / 100000000) + (N / 10000000) + (N / 1000000) + (N / 100000)
                + (N / 10000) + (N / 1000) + (N / 100) + (N / 10) + (N % 10);
    if (N % harshad == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}