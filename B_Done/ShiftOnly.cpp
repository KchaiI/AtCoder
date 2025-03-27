#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int min_count = INT_MAX;
    for(int i = 0; i < N; i++) {
        int count = 0;
        int number;
        cin >> number;
        while(number % 2 == 0) {
            number /= 2;
            count++;
        }
        min_count = min(min_count, count);
    }
    cout << min_count << endl;
}