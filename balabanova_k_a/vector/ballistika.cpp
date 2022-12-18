#include "geom.hpp"
#include <iostream>
#include <fstream>

int main() {
    Rdec2D r1 = {0 , 0};
    Rdec2D r2 = {0, 0};
    Rdec2D v1 = {0, 0};
    Rdec2D v2 = {0, 0};
    Rdec2D delta_s;
    double t1, t2, delta_t, x1, x2, y1, y2, k = 0, d_t = 1;
    const double c = 300.0, g = 10.0;
    delta_s = r2 - r1;
    double ans = 0;
    delta_t = norm(delta_s) / c;
    double tmp = 0;
    x1 = r1.x;
    x2 = r2.x;
    y1 = r1.y;
    y2 = r2.y;
    double rad = 0;
    while (rad < 3.14 && ans == 0) {
        while (y1 >=  0 && (y1 != y2 && x1 != x2)) {
            tmp++;
            t1 = delta_t + d_t * tmp;
            t2 = d_t * tmp;
            y1 = v1.y * t1 - g * t1 * t1 / 2;
            x1 = r1.x + v1.x * t1;
            v2.x = norm(v2) * std::cos(rad);
            v2.y = norm(v2) * std::sin(rad);
            y2 = v2.y * t2 - g * t2 * t2 / 2;
            x2 = r2.x + v2.x * t2;
        }
        if (y1 == y2 && x1 == x2) {
            ans = rad;
        }
        if (y1 < 0 && (y1 != y2 || x1 != x2)){
            ans = 0;
        }
        rad += 0.2;
    }
}
