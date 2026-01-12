#include <iostream>
using namespace std;

int main() {
    double h1, h2, h3;
    cin >> h1 >> h2 >> h3;

    bool result = (h1 == h2) && (h2 == h3);

    cout << boolalpha << result << endl;

    return 0;
}