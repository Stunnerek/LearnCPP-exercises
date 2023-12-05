

#include <iostream>
int toint(int a) {
    return a;
}

int main()
{
    double a{};
    double b{};
    char equation{};
    
    std::cout << "Enter a double value";
    std::cin >> a;
    std::cout << "Enter a double value";
    std::cin >> b;
    std::cout << "Enter + , -, *, or /:*";
    std::cin >> equation;
    if (equation == '+') {
        std::cout << a << equation << b << "=" << a + b;
    }
    else if (equation == '-') {
        std::cout << a << equation << b << "=" << a - b;
    }
    else if (equation == '*') {
        std::cout << a << equation << b << "=" << a * b;
    }
    else if (equation == '/') {
        std::cout << a << equation << b << "=" << a / b;
    }
    else {
        std::cout << "bruh";
    }

}
