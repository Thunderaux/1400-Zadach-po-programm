#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int k;
    cin >> k;

    if (k % 10 == 1 && k % 100 != 11) {
        cout << "мы нашли " << k << " гриб в лесу" << endl;
    }
    else if (k % 10 >= 2 && k % 10 <= 4 && (k % 100 < 10 || k % 100 > 20)) {
        cout << "мы нашли " << k << " гриба в лесу" << endl;
    }
    else {
        cout << "мы нашли " << k << " грибов в лесу" << endl;
    }

    return 0;
}