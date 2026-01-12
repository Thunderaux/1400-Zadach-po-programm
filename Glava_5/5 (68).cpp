#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool leap = (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0);

    cout << boolalpha << leap << endl;

    return 0;
}