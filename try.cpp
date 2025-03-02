#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  int y;
  y = x * (a + b);
  cout << y << endl;

  cout << y * y << endl;

  int z = y * y;
  z--;
  cout << z << endl;

}
