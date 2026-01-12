/*
 * Deepak Shenoy
 * Foundations
 *
 */

#include <iostream>
#include <algorithm>
#include <functional>

int main() {

    std::vector<std::function<bool(double, double)>> comparators {
        std::less<double>(),
        std::less_equal<double>(),
        std::greater<double>(),
        std::greater_equal<double>()
    };

    double x = 10.;
    double y = 10.;

    auto compare = [&x, &y] (const std::function<bool(double, double)> &comparator) {
        bool b = comparator(x, y);
        std::cout << (b?"TRUE": "FALSE") << "\n";
    };

    std::ranges::for_each(comparators, compare);
    return 0;
}