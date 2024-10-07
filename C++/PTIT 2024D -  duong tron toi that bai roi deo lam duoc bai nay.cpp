#include <cmath>
#include <iostream>

const long double epsilon = 1e-9;

int main() {
    long double X, Y, r;
    std::cin >> X >> Y >> r;

    long long count = 0;
    long long xMin = static_cast<long long>(X - r);
    long long xMax = static_cast<long long>(X + r);

    for (long long x = xMin; x <= xMax; ++x) {
        long double distX = fabs(x - X);

        // Check if the current x is on the boundary of the circle
        if ((distX - r) <= epsilon) {
            long double distY = sqrt(r * r - distX * distX);
            long long yMin = static_cast<long long>(Y - distY);
            long long yMax = static_cast<long long>(Y + distY);

            // Adjust yMin if it's outside the circle
            while (yMin <= Y + distY &&
                   !(((x - X) * (x - X)) + ((yMin - Y) * (yMin - Y)) - r * r <= epsilon)) {
                ++yMin;
            }

            // Adjust yMax if it's outside the circle
            while (yMax >= Y - distY &&
                   !(((x - X) * (x - X)) + ((yMax - Y) * (yMax - Y)) - r * r <= epsilon)) {
                --yMax;
            }

            // Count the number of valid y points between yMin and yMax
            count += (yMax - yMin + 1);
        }
    }

    std::cout << count << std::endl;
    return 0;
}
