#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int jj = n + 1 - i;
            if (i <= jj) {
                if (i % 2 == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }  
        cout << "\n" << endl;
    }

    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "#" << endl;
        }
    }
    cout << endl;
}