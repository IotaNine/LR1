#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    std::cout << "Hello\n";
    setlocale(LC_ALL, "Rus");

    int x, X;
    std::cout << "Введите x: ";
    std::cin >> x;
    X = (x * x) + x - 4;
    std::cout << "X=" << X << std::endl;

    unsigned int a, A;
    std::cout << "Введите a: ";
    std::cin >> a;
    A = (2 * a) - sqrt(a + 1);
    std::cout << "A=" << A << std::endl;

    bool k, l, m, n, D;
    std::cout << "Введите k: ";
    std::cin >> k;
    std::cout << "Введите l: ";
    std::cin >> l;
    std::cout << "Введите m: ";
    std::cin >> m;
    std::cout << "Введите n: ";
    std::cin >> n;
    D = (m ^ k) && (!l) || n;
    std::cout << std::boolalpha << "D=" << D << std::endl;

    int b, B;
    std::cout << "Введите b: ";
    std::cin >> b;
    B = pow(2, b);
    std::cout << "B=" << B << std::endl;
    std::cout << "B(восьмеричная)=" << std::oct << B << std::endl;

    unsigned short int c, d, e, f, F;
    std::cout << "Введите  c: ";
    std::cin >> c;
    std::cout << "Введите d: ";
    std::cin >> d;
    std::cout << "Введите e: ";
    std::cin >> e;
    std::cout << "Введите f: ";
    std::cin >> f;
    F = (c || d) && (!e) ^ f;
    std::cout << std::hex << std::showbase << F << std::endl;
    std::cout << std::setw(4) << std::left << std::setfill('0');
    std::cout << F << std::endl;
    std::cout << std::setw(4) << std::internal << F << std::endl;
    std::cout << std::dec << std::setw(4) << std::right;
    std::cout << a << std::endl;
}
