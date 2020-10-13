#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    int Nomer;
    std::cout << "Hello\n";
    setlocale(LC_ALL, "Rus");
    std::cout << "Выберите задачу: ";
    std::cin >> Nomer;
    switch (Nomer) {
    case 1:
        int x, X;
        std::cout << "Введите x: ";
        std::cin >> x;
        X = pow(x, 2) + x - 4;
        std::cout << "X=" << std::setprecision(3) << X << std::endl;
        break;
    case 2:
        unsigned int a;
        float A;
        std::cout << "Введите a: ";
        std::cin >> a;
        A = 2 * abs(a) - sqrt(a + 1);
        std::cout << "A=" << std::showpos << A << std::endl;
        break;
    case 3:
        bool k, l, m, n, D;
        std::cout << "Enter k value: ";
        std::cin >> k;
        std::cout << "Enter l value: ";
        std::cin >> l;
        std::cout << "Enter m value: ";
        std::cin >> m;
        std::cout << "Enter n value: ";
        std::cin >> n;
        D = (m xor k) && (!l) || n;
        std::cout << std::boolalpha << "D=" << D << std::endl;
        break;
    case 4:
        int b, B;
        std::cout << "Enter b value: ";
        std::cin >> b;
        B = pow(2, b);
        std::cout << "B=" << B << std::endl;
        std::cout << "B(восьмеричная)=" << std::oct << B << std::endl;
        break;
    case 5:
        unsigned short int c, d, e, f, F;
        std::cout << "Enter c value: ";
        std::cin >> c;
        std::cout << "Enter d value: ";
        std::cin >> d;
        std::cout << "Enter e value: ";
        std::cin >> e;
        std::cout << "Enter f value: ";
        std::cin >> f;
        F = (c | d) & (~e) ^ f;
        std::cout << std::setw(6) <<
            std::setfill('0') << std::internal <<
            std::hex << std::showbase << ((c | d) & (~e) ^ f);
        break;
    }
 }