#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool a_rook = (a == c) || (b == d);
    bool b_bishop = abs(a - c) == abs(b - d);
    bool c_king = abs(a - c) <= 1 && abs(b - d) <= 1;
    bool d_queen = a_rook || b_bishop;
    bool e_white_normal = (a == c) && (d == b + 1);
    bool e_white_start = (a == c) && (b == 2) && (d == 4);
    bool e_white_capture = (abs(a - c) == 1) && (d == b + 1);
    bool e_white = e_white_normal || e_white_start || e_white_capture;
    bool f_black_normal = (a == c) && (d == b - 1);
    bool f_black_start = (a == c) && (b == 7) && (d == 5);
    bool f_black_capture = (abs(a - c) == 1) && (d == b - 1);
    bool f_black = f_black_normal || f_black_start || f_black_capture;
    bool g_knight = (abs(a - c) == 2 && abs(b - d) == 1) || (abs(a - c) == 1 && abs(b - d) == 2);

    cout << boolalpha << a_rook << endl;
    cout << boolalpha << b_bishop << endl;
    cout << boolalpha << c_king << endl;
    cout << boolalpha << d_queen << endl;
    cout << boolalpha << e_white << endl;
    cout << boolalpha << f_black << endl;
    cout << boolalpha << g_knight << endl;

    return 0;
}