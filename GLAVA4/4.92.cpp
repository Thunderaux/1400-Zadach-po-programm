#include <iostream>
using namespace std;

int main() {
    double t;
    cin >> t;

    int cycle_time = (int)t % 6;

    if (cycle_time < 3) {
        cout << "green" << endl;
    }
    else if (cycle_time < 4) {
        cout << "yellow" << endl;
    }
    else {
        cout << "red" << endl;
    }

    return 0;
}