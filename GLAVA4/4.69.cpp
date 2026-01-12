#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a < b) swap(a, b);

    int maxCount = 0;

    int orientations[6][2] = {
        {c, d}, {c, e}, {d, c}, {d, e}, {e, c}, {e, d}
    };

    for (int i = 0; i < 6; i++) {
        int x = orientations[i][0];
        int y = orientations[i][1];

        int countX = a / x;
        int countY = b / y;
        int total1 = countX * countY;

        int countX2 = a / y;
        int countY2 = b / x;
        int total2 = countX2 * countY2;

        if (total1 > maxCount) maxCount = total1;
        if (total2 > maxCount) maxCount = total2;
    }

    cout << maxCount << endl;

    return 0;
}