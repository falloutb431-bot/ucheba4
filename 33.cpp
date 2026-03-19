#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    for (int a = 1; a < 11;a++)
    {
        std::cout << number * a << std::endl;
  }
    return 0;
}