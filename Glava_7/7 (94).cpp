#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    int result;
    if (k % 2 == 1) {
        int num = 10 + (k / 2);
        result = num / 10;
    }
    else {
        int num = 10 + ((k - 1) / 2);
        result = num % 10;
    }

    cout << result << endl;

    return 0;
}