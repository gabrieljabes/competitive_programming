#include <bits/stdc++.h>

int main(){

    float x1, y1, x2, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << std::fixed << std::setprecision(4);
    std::cout << sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))) << std::endl;

    return 0;
}