#include "CMakeProject1.hpp"
#include <iostream>

int main() {
    Rdec2D v_k = { -6, -5 };
    Rdec2D r_k = { -6, -100 };
    Rdec2D v_m = { 0, 4 };
    Rdec2D r_m = { 0, -20 };
    Rdec2D d_v;//вектор, соединяющий кошку и мышку
    Rdec2D v_mg_k;//вектор, мгновенная скорость кошки
    Rdec2D d2_v;
    double s_k = 1, l;//размер кошки, l - отношение размера кошки к расстоянию между кошкой и мышкой
    double d, t, delta_m, delta, d1, d2;
    d_v = r_k - r_m;
    d = norm(d_v);//расстояние между кошкой и мышкой
    t = 0.0;
    delta = 0.1;//промежуток времени, через который смотрим местоположение кошки и мышки
    d1 = d;
    d2 = d - 0.01;
    while (d2 > s_k && r_m.y < 0 && d1 - d2 > 0) {
        t = t + delta;
        r_m.y = r_m.y - v_m.y * t;
        v_mg_k = (r_m - r_k) * norm(v_k) / norm(r_m - r_k);
        r_k = r_k + (v_mg_k * delta);
        d2_v = r_m - r_k;//рассотяние через промежуток времени
        d2 = norm(d2_v);
    }
    if (r_m.y < 0) {
        std::cout << "Mouse be live";
        std::cout << " t = " << t;
        std::cout << "  r = " << d2_v;
    }
    else {
        std::cout << "Mouse died";
        std::cout << "t = " << t;
        std::cout << "r: " << r_m;
    }
    return 0;
}
