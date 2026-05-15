#include <bits/stdc++.h>

int main(){
    int a, b;

    std::cin >> a >> b;
    a = (a + b + abs(a - b))/2;
    std::cin >> b;
    b = (a + b + abs(a - b))/2;

    std::cout << b << " eh o maior" << std::endl;

    return 0;
}