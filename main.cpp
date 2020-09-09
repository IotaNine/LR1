#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    std::cout << "Hello, World!" << std::endl;

    int x = 0;
    int X = 0;
    std::cout << "Enter x value: ";
    std::cin >> x;
    X = (x*x)+x-4;
    std::cout<<"X="<<X<<std::endl;

    unsigned int a = 0;
    unsigned int A = 0;
    std::cout<<"Enter a value: ";
    std::cin>>a;
    A = 2*abs(a) - sqrt(a+1);
    std::cout<<"A="<<A<<std::endl;

    bool k = 0;
    bool l = 0;
    bool m = 0;
    bool n = 0;
    bool D = 0;
    std::cout << "Enter k value: "<<std::endl;
    std::cin>>k;
    std::cout << "Enter l value: "<<std::endl;
    std::cin>>l;
    std::cout << "Enter m value: "<<std::endl;
    std::cin>>m;
    std::cout << "Enter n value: "<<std::endl;
    std::cin>>n;
    D = (m^k)&&(!l)||n;
    std::cout<<std::boolalpha<<"D= "<<D<<std::endl;


    int b = 0;
    int B = 0;
    std::cout << "Enter b value: "<<std::endl;
    std::cin>>b;
    B = pow(2,b);
    std::cout<<"B="<<B<<std::endl;
    std::cout<<"B(oct)= "<<std::oct<<B<<std::endl;

    unsigned short int c = 0;
    unsigned short int d = 0;
    unsigned short int e = 0;
    unsigned short int f = 0;
    unsigned short int F = 0;
    std::cout << "Enter c value: "<<std::endl;
    std::cin>>c;
    std::cout << "Enter d value: "<<std::endl;
    std::cin>>d;
    std::cout << "Enter e value: "<<std::endl;
    std::cin>>e;
    std::cout << "Enter f value: "<<std::endl;
    std::cin>>f;
    F = (c||d)&&(!e)^f;
    std::cout<<"F= "<<std::hex<<std::showbase<<F<<std::endl;
    



}


