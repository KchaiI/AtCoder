#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, count = 0;
    cin >> n;
    vector<int> buttun(n);

    //数値入力
    for(int i = 0; i < n; i++) {
        cin >> buttun[i];
    }

    //判定
    int number = 0;
    for(int i = 0; i < n; i++) {
        number = buttun[number] - 1; //0-index
        count++;
        if(number == 1){
            cout << count << endl;
            break;
        }
    }
    if(count == n) {
        cout << -1 << endl;
    }
}