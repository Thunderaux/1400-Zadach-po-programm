#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool same_color = ((a + b) % 2) == ((c + d) % 2);

    cout << boolalpha << same_color << endl;

    return 0;
}