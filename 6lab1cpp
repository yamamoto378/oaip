#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x_start, x_end, dx;

    cout << "Введите x_нач, x_конеч и шаг dx: ";
    cin >> x_start >> x_end >> dx;
    double x = x_start;
    while (x <= x_end) {
        if (x == 2.0 || x == -2.0) {
            cout << "| " << setw(9) << fixed << setprecision(3) << x 
                 << " | не опред. |\n";
        } else {
            double f = pow(x, 4) + 5.2 / (x * x - 4.0) + pow(sin(x), 2);
            cout << "| " << setw(9) << fixed << setprecision(3) << x 
                 << " | " << setw(9) << setprecision(4) << f << " |\n";
        }
        x += dx;
    }

    cout << "-------------------------\n";
    return 0;
}
