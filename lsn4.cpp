#include <iostream>
#include <iomanip>



int main() {
    int a, b, c;
    std::cout << "Insert numbers \n";
    std::cin >> a >> b;
    c = a + b;
    if ((c >= 10) && (c <= 20))
    {
        std::cout << "True" << "\n";
    }
    else
    {
        std::cout << "False" << "\n";
    }

    int n, k;
    k = 0;
    std::cout << "Insert integer number \n";
    std::cin >> n;
    if ((n == 1) || (n == 0) || (n < 0))
    {
        std::cout << "the number is not prime" << std::endl;
    }
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            k++;
        }
    }
    if (k > 2)
    {
        std::cout << "the number is not prime" << std::endl;
    }
    if (k <= 2)
    {
        std::cout << "the number is  prime!" << std::endl;
    }

    const  int y = 10;
    const int z = 15;
    if ((y == 10) || (z == 10) || (y + z == 10))
    {
        std::cout << "true\n";
    }
    else std::cout << "false\n";

    int f;
    std::cout << "Enter the year\n";
    std::cin >> f;
    if ((f == 100) || (f % 4 != 0))
    {
        std::cout << "It is not a leap year!\n";
    }
    if (f % 4 == 0)
    {
        std::cout << "It is a leap year!\n";
    }


    return 0;
}