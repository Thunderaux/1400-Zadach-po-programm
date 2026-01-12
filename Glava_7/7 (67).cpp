#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d1 = n / 100000;
    int d2 = (n / 10000) % 10;
    int d3 = (n / 1000) % 10;
    int d4 = (n / 100) % 10;
    int d5 = (n / 10) % 10;
    int d6 = n % 10;

    bool lucky = (d1 + d2 + d3) == (d4 + d5 + d6);

    cout << boolalpha << lucky << endl;

    return 0;
}