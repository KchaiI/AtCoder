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
        for(int j = 0; j < number; j++) {
            if(number % 2 == 0) {
                number = number / 2;
                count++;
            } else {
                break;
            }
        }

        if(count <= min_count) {
            min_count = count;
        }
    }
    cout << min_count << "\n";
}