#include <bits/stdc++.h>
using namespace std;
int N;

int main() {
    cin >> N;

    int harshad = 0;
    int n = N;
    while (n) {
        harshad += n % 10;
        n /= 10;
    }
    if (N % harshad == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}