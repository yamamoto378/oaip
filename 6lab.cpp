#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cout << "введите значение x: ";
    cin >> x;
    double fx = x + pow(sin(x), 2);
    cout << "f(x) = " << fx << endl;
    double sum = 0.0;
    int n = 0;
    do {
        n++;
        sum += 1.0 / n;
    } while (sum <= fx);
    cout << "наименьшее n = " << n << endl;
    cout << "сумма ряда при этом n = " << sum << endl;
    return 0;
}
