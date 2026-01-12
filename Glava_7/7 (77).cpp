#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    bool white_rook_move = (a == e) || (b == f);
    bool white_queen_move = (a == e) || (b == f) || (abs(a - e) == abs(b - f));
    bool white_bishop_move = (abs(a - e) == abs(b - f));
    bool white_knight_move = (abs(a - e) == 2 && abs(b - f) == 1) || (abs(a - e) == 1 && abs(b - f) == 2);
    bool white_king_move = abs(a - e) <= 1 && abs(b - f) <= 1;

    bool black_rook_threat = (c == e) || (d == f);
    bool black_queen_threat = (c == e) || (d == f) || (abs(c - e) == abs(d - f));
    bool black_bishop_threat = (abs(c - e) == abs(d - f));
    bool black_knight_threat = (abs(c - e) == 2 && abs(d - f) == 1) || (abs(c - e) == 1 && abs(d - f) == 2);

    bool white_rook_white_rook = white_rook_move && !black_rook_threat;
    bool white_rook_black_queen = white_rook_move && !black_queen_threat;
    bool white_rook_black_knight = white_rook_move && !black_knight_threat;
    bool white_rook_black_bishop = white_rook_move && !black_bishop_threat;
    bool white_queen_black_queen = white_queen_move && !black_queen_threat;
    bool white_queen_black_rook = white_queen_move && !black_rook_threat;
    bool white_queen_black_knight = white_queen_move && !black_knight_threat;
    bool white_queen_black_bishop = white_queen_move && !black_bishop_threat;
    bool white_knight_black_knight = white_knight_move && !black_knight_threat;
    bool white_knight_black_rook = white_knight_move && !black_rook_threat;
    bool white_knight_black_queen = white_knight_move && !black_queen_threat;
    bool white_knight_black_bishop = white_knight_move && !black_bishop_threat;
    bool white_bishop_black_bishop = white_bishop_move && !black_bishop_threat;
    bool white_bishop_black_queen = white_bishop_move && !black_queen_threat;
    bool white_bishop_black_knight = white_bishop_move && !black_knight_threat;
    bool white_bishop_black_rook = white_bishop_move && !black_rook_threat;
    bool white_king_black_bishop = white_king_move && !black_bishop_threat;
    bool white_king_black_queen = white_king_move && !black_queen_threat;
    bool white_king_black_knight = white_king_move && !black_knight_threat;
    bool white_king_black_rook = white_king_move && !black_rook_threat;

    cout << boolalpha << white_rook_white_rook << endl;
    cout << boolalpha << white_rook_black_queen << endl;
    cout << boolalpha << white_rook_black_knight << endl;
    cout << boolalpha << white_rook_black_bishop << endl;
    cout << boolalpha << white_queen_black_queen << endl;
    cout << boolalpha << white_queen_black_rook << endl;
    cout << boolalpha << white_queen_black_knight << endl;
    cout << boolalpha << white_queen_black_bishop << endl;
    cout << boolalpha << white_knight_black_knight << endl;
    cout << boolalpha << white_knight_black_rook << endl;
    cout << boolalpha << white_knight_black_queen << endl;
    cout << boolalpha << white_knight_black_bishop << endl;
    cout << boolalpha << white_bishop_black_bishop << endl;
    cout << boolalpha << white_bishop_black_queen << endl;
    cout << boolalpha << white_bishop_black_knight << endl;
    cout << boolalpha << white_bishop_black_rook << endl;
    cout << boolalpha << white_king_black_bishop << endl;
    cout << boolalpha << white_king_black_queen << endl;
    cout << boolalpha << white_king_black_knight << endl;
    cout << boolalpha << white_king_black_rook << endl;

    return 0;
}