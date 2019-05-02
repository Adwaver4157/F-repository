#include <iostream>
using namespace std;

int main() {
  int passnumber;  // パスワード代入変数
  cout << "Enter your password:";
  cin >> passnumber;
  if (passnumber == 4157) {
    cout << "Hello World" << endl;
  }
  else {
    cout << "Your password is wrong." << endl;
  }

  return 0;
}
