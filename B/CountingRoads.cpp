#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;

    vector<int> city(n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        city[a - 1]++;
        city[b - 1]++;
    }
    for(int i = 0; i < n; i++) {
        cout << city[i] << endl;
    }
}