#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, n, m;
    cin >> a >> b >> c >> d >> n >> m;

    int arrive = a * 60 + b;
    int depart = c * 60 + d;
    int passenger = n * 60 + m;

    bool on_platform = (passenger >= arrive) && (passenger <= depart);

    cout << boolalpha << on_platform << endl;

    return 0;
}