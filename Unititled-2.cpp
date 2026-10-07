
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int h, m, s;
    int p, q, r;
    std::cout << "введите текущее время: ";
    std::cin >> h >> m >> s;
    std::cout << "сколько времени назад: ";
    std::cin >> p >> q >> r;
    long long current_seconds = h * 3600 + m * 60 + s;
    long long past_seconds = p * 3600 + q * 60 + r;
    long long total_seconds_in_day = 24 * 3600;
    long long diff_seconds = (current_seconds - past_seconds) % total_seconds_in_day;
    if (diff_seconds < 0)
    {
        diff_seconds += total_seconds_in_day;
    }
    int res_h = diff_seconds / 3600;
    int res_m = (diff_seconds % 3600) / 60;
    int res_s = diff_seconds % 60;
    std::cout << "часы показывали: " << res_h << " ч. " << res_m << " мин. " << res_s << " сек." << std::endl;
    return 0;
}
