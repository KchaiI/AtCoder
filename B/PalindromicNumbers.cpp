#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int count = 0;
    for(int i = A; i <= B; i++) {
        int s = i % 10, t = i / 10000 % 10;
        int u = i /10 % 10, v = i / 1000 % 10;
        if(s == t && u == v) {
            count ++;
        }
    }

    cout << count << endl;
}