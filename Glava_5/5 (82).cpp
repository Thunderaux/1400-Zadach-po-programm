#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    if (n % 10 == 1 && n != 11) {
        cout << "мне " << n << " год" << endl;
    }
    else if (n % 10 >= 2 && n % 10 <= 4 && (n < 10 || n > 20)) {
        cout << "мне " << n << " года" << endl;
    }
    else {
        cout << "мне " << n << " лет" << endl;
    }

    return 0;
}